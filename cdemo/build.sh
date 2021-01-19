#!/bin/bash

PROGARR=(helloworld variables sizeofvariables ifstmnt ifstmnt_err wloop floop iteration badindent pointers funcs array string stringlib userinput argtest argtest2 structs rand fileio fileio2 filio3)

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
	if [ $? -eq 0 ] ; then
	    echo "build ok: "$PROG
	else
	    echo "build error: "$PROG
	    exit $?
	fi
    fi
done
echo "built all"
