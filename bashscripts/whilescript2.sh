#!/bin/bash


while true ; do
   echo "are you done?"
   read ANS
   if [ $ANS = "y" ] ; then
       break
   fi
done


exit 0
