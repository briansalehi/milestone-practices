#!/bin/sh

tmpfile=.markdown2html.tmp
write_to_file=false
append_to_file=false
edit_file=false

if [ -f $tmpfile ]; then rm $tmpfile; fi

parse_links() {
    # reference style links
    sed -i -r 's/([^!])\[(.*)\]\[(.*)\]/\1<a href="\3">\2<\/a>/g' $tmpfile
    for map in `sed -r -n 's/^\[(.*)\]: (.*)$/\1:\2/p' $tmpfile`; do
        key=`echo $map | cut -d':' -f1`
        value=`echo $map | cut -d':' -f2-`
        sed -i s,href=\"$key\",href=\"$value\",g $tmpfile
    done

    # inline links
    sed -i -r 's/([^!])\[(.*)\]\((.*)\)/\1<a href="\3">\2<\/a>/g' $tmpfile

    # remove links
    sed -i '/^\[.*\]: .*$/d' $tmpfile
}

parse_images() {
    # reference style images
    sed -i -r 's/!\[.*\]\[(.*)\]/<img src="\1">/g' $tmpfile
    for map in `sed -r -n 's/^\[(.*)\]: (.*)$/\1:\2/p' $tmpfile`; do
        key=`echo $map | cut -d':' -f1`
        value=`echo $map | cut -d':' -f2-`
        sed -i s,src=\"$key\",src=\"$value\",g $tmpfile
    done

    # inline images
    sed -i -r 's/!\[.*\]\((.*)\)/<img src="\1">/g' $tmpfile
}

parse_newlines() {
    sed -i 's/$/<br\/>/' $tmpfile
    sed -i 's/^<br\/>$//' $tmpfile
}

parse_unordered_lists() {
    sed -i -r 's/^\* (.*)<br\/>$/<li>\1<\/li>/' $tmpfile
    sed -i '/^$/,/^<li>/ s/<li>/<ul><li>/' $tmpfile
    awk 'NR==1 {line=$0} /^$/ {gsub(/<\/li>/,"</li></ul>",line)} {print line; line=$0} END {print line}' $tmpfile > awk.tmp
    sed -i '1d' $tmpfile
}

parse_code() {
    sed -i -e 's/```[a-z].*/<figure><pre><code>/' -e 's/```\s*$/<\/code><\/pre><\/figure>/' $tmpfile
}

parse_headers() {
    sed -i -r 's/^# (.*)$/<h1>\1<\/h1>/' $tmpfile
    sed -i -r 's/^## (.*)$/<h2>\1<\/h2>/' $tmpfile
    sed -i -r 's/^### (.*)$/<h3>\1<\/h3>/' $tmpfile
    sed -i -r 's/^#### (.*)$/<h4>\1<\/h4>/' $tmpfile
    sed -i -r 's/^##### (.*)$/<h5>\1<\/h5>/' $tmpfile
    sed -i -r 's/^###### (.*)$/<h6>\1<\/h6>/' $tmpfile
}

parse_unordered_list() {
    sed -i -r 's/^\* (.*)$/<li>\1<\/li>/' $tmpfile
}

parse_bold() {
    sed -i -r 's/[^^\*]\*\*(.*)\*\*/<b>\1<\/b>/g' $tmpfile
    sed -i -r 's/__(.*)__/<b>\1<\/b>/g' $tmpfile
}

parse_italic() {
    sed -i -r 's/([^^\*])\*([^\*]*)\*/\1<i>\2<\/i>/g' $tmpfile
    sed -i -r 's/_([^_]*)_/<i>\1<\/i>/g' $tmpfile
}

convert_special_characters() {
    sed -i -e 's/_/\&lowbar;/g' $tmpfile
    sed -i -e 's/&/\&amp;/g' $tmpfile
    sed -i -e 's/</\&lt;/g' -ie 's/>/\&gt;/g' $tmpfile
    sed -i -e 's/~/\&tilde;/g' -ie 's/"/\&quot;/g' $tmpfile
    sed -i -e 's/_/\&lowbar;/g' $tmpfile
    # don't be shy and add any character if you believe you need it escaped!
}

# special
link_headers() {
    sed -i -r 's/^([#]+) ([0-9.]*) (.*)$/\1 <a id="\2">\2 \3<\/a>/' $tmpfile
    sed -i -r 's/^([#]+) ([0-9.]*) (.*)$/\1 <a id="\2">\2 \3<\/a>/' $tmpfile
}

markdown_parser() {
    # don't mess with the ordering
    parse_links
    parse_images
    link_headers
    parse_headers
    parse_code
    parse_bold
    parse_italic
    parse_unordered_list
}

parse_options() {
    case $1 in
    -h|--help)
        echo "usage: markdown2html.sh <options>"
        echo
        echo "options:"
        echo "-h or --help          show help message"
        echo "-o or --output <file> write output to <file>, existing file will be truncated"
        echo "-a or --append <file> append output to <file>"
        echo "-e or --edit <file>   edit <file> directly"
    ;;
    -o|--output)
        write_to_file=true
    ;;
    -a|--append)
        append_to_file=true
    ;;
    -e|--edit)
        edit_file=true
    ;;
    -*)
        echo "invalid parameter"
        exit 1
    ;;
    *)
        # if -o, -a or -e is specified, read <file> parameter
        if $write_to_file && [ -z $output_file ]; then
            output_file=$1
            rm -f $output_file
        elif $append_to_file && [ -z $output_file ]; then
            output_file=$1
        else
            if $edit_file; then
                tmpfile=$1
            else
                cat $1 > $tmpfile
            fi

            # parse Markdown to HTML here
            markdown_parser

            if ( $append_to_file || $write_to_file ) && [ -n $output_file ]; then
                # write to file if -o <file> is specified
                cat $tmpfile >> $output_file
            elif $append_to_file && [ -n $output_file ]; then
                # append to file if -a <file> is specified
                cat $tmpfile >> $output_file
            else
                if ! $edit_file; then
                    # write to stdout if output file is not specified
                    cat $tmpfile
                fi
            fi
        fi
    ;;
    esac
}

while [ $# -gt 0 ]; do
    parse_options $1
    shift
done

if ! $edit_file; then
    rm -f $tmpfile
fi
