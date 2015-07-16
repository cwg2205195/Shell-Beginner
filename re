#!/bin/sh
#This program read ever line from a readable file.
read -p "What do you want to see ?" name
count=1
if [ -f $name ]#judge whether it is a file
then
cat $name | while read line
do
  echo "Line $count:$line"
  count=$[$count + 1]
done
echo "All lines have been read!"
else
echo "File name, please !"
fi
