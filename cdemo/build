#!/bin/bash

PROGARR=(helloworld variables sizeofvariables ifstmnt ifstmnt_err wloop floop badindent pointers funcs array string stringlib userinput argtest argtest2 structs rand fileio)

if [ $# -ne 0 ] ; then
    for PROG in "${PROGARR[@]}" ; do
	rm $PROG &>/dev/null
    done
    echo "cleaned up"
    exit 0
fi

for PROG in "${PROGARR[@]}" ; do
    if [ -e $PROG.c ] ; then
	gcc $PROG.c -o $PROG
	if [ $? -ne 0 ] ; then
	    echo "build error: "$PROG
	    exit $?
	fi
    fi
done
echo "built all"
