# SQL Practices

SQL practice repository.  
This repository is not intended to be a tutorial, you already have to know what you are dealing with.

Don't forget to contribute!

## Table of Content

[*brief list of contents*](./Brief.md)

[*verbose list of contents*](./List.md)

## Resources

Practices are written by inspiration of the following references:  

[Referenece List](./references.md)

## Contribute

Practice pages are generated automatically in **markdown** syntax by *update.sh* bash script file.  
Move, add or modify any of the files as you want.  
*update.sh* script file looks for following files:

* filename.extension (extension is defined in config.sh, e.g. sql, cxx, c, py, js, etc.)
* filename.title.txt (title of practice page to be shown in links)
* filename.comment.txt (comments in practice pages)
* filename.reference.txt (reference of comment, *[either book or link]: [single number 1|two numbers separated by comma 1,2|range 1-5]*)
* filename.input.txt (if program expects an input)
* filename.flags.txt (compiler flags, e.g. -lpthread -Wall -Os)

Following files will be generated automatically and need to be kept untouched:

* filename.output.txt
* filename.md5sum.txt
* filename.md

## License

This work is licensed under a Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
