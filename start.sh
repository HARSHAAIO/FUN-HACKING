@echo off
echo "Press 1 to install requirements"
echo "Press 2 to have some fun with your name"
echo "Press 3 for hiding your private files"
echo "Press 4 for website dos testing"
echo "Press 0 to exit"

read opt
if[opt == 1] then
    chmod +x *
    ./requirements.sh
   
elif[opt == 2]
then
   chmod +x *
   gcc fun.c -o fun
   ./fun
   
elif[opt == 3]
then
   chmod +x *
   ./hide.sh
   
elif[opt == 4]
then
   chmod +x *
   gcc dos.c -o test
   echo "Please follow syntax ./test <websitename> <portvalue> to start dos/ddos"
   
else
  clear
  echo "Process completed"
