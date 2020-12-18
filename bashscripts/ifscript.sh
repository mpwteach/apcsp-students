#!/bin/bash
                                                                                                           

# check command line
if [ $# -gt 0 ] ; then
    DIR=$*
else
    DIR="."
fi

WC=`ls -l $DIR | wc -l`

echo "number of files in $DIR : "$WC


exit 0
