#!/bin/bash

# compiler or interpreter used for building practices
COMPILER=pdflatex

# compiler options (optional)
COMPILER_OPTIONS=

# whether above compiler or interpreter generates an executable file (true)
# or outputs the result to stdout stream (false)
EXECUTABLE_MODE=false

# language extension. eg: cxx, c, py, js, jar, go, etc.
PRIMARY_EXTENSION=tex

# additional extensions coming beside source codes. eg: md, txt, pdf, etc.
ADDITIONAL_EXTENSIONS="md md5sum.txt title.txt solution.tex"

# whether comments must have a reference for validity or not
REFERENCE_VALIDITY=false

# maximum directory level, almost always 3 levels are meaningful
MAX_DIR_LEVEL=3

# if -v is set, show verbose logs
VERBOSE=false;

# if -vv is set, show very verbose logs
VVERBOSE=false;

# if -f is set, shell script is forced to organize and refresh repository
FORCE=true;
