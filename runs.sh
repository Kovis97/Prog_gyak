#! /bin/bash
#set -x
if [ $# -lt 2 ]; then
    echo "Kapcsoló megadása kötelező, Kapcsolók:"
    echo " Név kiterjesztés nélkül"
    echo " -f Csak forditas és futtatás"
    echo " -r run"
else
    case "$2" in
        -r) ./$1;;
        -f)g++ -Wall $1.cpp -o $1;./$1;;
        *) echo "hiba" exit;;
    esac
fi
exit 0;