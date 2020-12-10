# Math Practices

Mathematics practice repository.  
You can practice math step by step through this repository, using one of the [references][1].  
To do practices, you must have studied one of the references,
that's it, you should know how to do math before practicing it!
this is just a practice series to do daily math.  

Don't forget to contribute!

## Table of Content

[*brief list of contents*](./Brief.md)

[*verbose list of contents*](./List.md)

## References

Practices are written by inspiration of the following Mathematics references:  

1. [Thomas's Calculus][2]
1. [Adam's Calculus][3]
1. [James Stewart's Calculus][4]

## Representation

Practice pages are generated automatically in [**markdown**][6] markup,
by *update.sh* bash script file.

Mathematical notations are written in [**LaTeX**][5] markup,
and results are appeared in corresponding markdown pages.

To represent mathematical equations and notations,
obviously I couldn't rely on HTML or Markdown syntax,
because they don't support it!  
so I wrote mathematical notations in latex files and _update.sh_ script automatically
compiles them into PDF files by **pdflatex** compiler.  
Then the script crops those PDFs into the right size.  
finally the script converts those cropped PDFs into
PNG files which you can see in every practice page!

practice.tex -> practice.pdf -> cropped.pdf -> practice.png -> practice.md

## Contribute

Feel free to add or update any of the practice files (please do! I got no time).  
You should consider a few things before adding or updating any practice:

* write practices in [**LaTeX**][5] markup in _filename.tex_ files
* write solutions in [**LaTeX**][5] markup in _filename.solution.tex_ files
* to add a practice, put the file's name in the **.list** file, in that directory, in order!
* title each practice in _filename.title.txt_ files, this goes to markdown file header
* *update.sh* script will set file numbers automatically, based on orders in _.list_ file, so don't bother numbering!
* practice files should be named properly, say _"implicit-differenciation.tex"_
* each practice should clearly explain only 1 topic
* each practice should be as minimal as possible
* update any practice if you feel there is a better way to represent that problem and its solution
* do not touch auto generated _md5sum.txt_ and _.md_ files

## License

This work is licensed under a Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.

[1]: https://github.com/briansalehi/math/blob/master/README.md#references
[2]: https://www.goodreads.com/book/show/41148072-thomas-calculus
[3]: https://www.goodreads.com/book/show/39151537-calculus
[4]: https://www.goodreads.com/book/show/39323965-calculus
[5]: https://www.latex-tutorial.com/
[6]: https://www.markdowntutorial.com/
