## Contribute

This repository is maintained as my personal project to learn more by teaching  
more. But any contribution is welcome and appreciated.  
Practice pages are managed by [**practice-manager**](https://github.com/briansalehi/practice-manager.git) tool, which I developed  
solely to maintain my practical repositories.  
What you can contribute to is to modify .cxx files, create them or suggest an
edit.  
To create new practices, you should follow one simple rule:

* each practice should explain one simple topic

To create a new practice, run **practice-manager --create** script file with  
the relative directory as its first parameter.  
You will be asked a few questions, then below files will be generated which you  
will need to fill them appropriately:  

* filename.cxx (practice code)
* filename.title.txt (title of practice in one short line)
* filename.comment.txt (practice comments as detailed as possible)
* filename.reference.txt (if comments have references, specify them)
* filename.input.txt (if program expects an input, write inputs into this file)
* filename.flags.txt (compiler flags, e.g. -lpthread -Wall -Os -msse2)
* filename.config (practice specific configuration file)

Following files will be generated automatically and need to be kept untouched:  

* filename.output.txt (will contain executable output, if any)
* filename.md5sum.txt (will contain cache to prevent compilation overrun)
* filename.toc.txt (will contain pagination section)
* filename.md (will be representable markdown file)

**practice-manager** script file reads existing *.config* files in directories  
to take action based on directory configuration. Some directories might need  
different compilers as an example.
