#!/bin/bash
DOXYFILE_PATH=$(pwd)/Doxyfile
echo "Doxyfile Path: $DOXYFILE_PATH"
doxygen $DOXYFILE_PATH
