#! /bin/bash

#run = "chmod +xr setapos.sh; ./setapos.sh"

#repl.it-in lévő git configurálása!
# echo "sajt"

echo ""
cd Prog_gyak/
chmod +xr runs.sh
ls -a
pwd;
git config --global user.email "galgoczi.aron97@gmail.com"
git config --global user.name "Kovis97"
git status
git pull origin master

