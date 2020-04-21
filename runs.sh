#! /bin/bash
#set -x
if [ $# != 2 ]; then
    echo "Név kiterjesztés nélkül"
    echo "Kapcsoló megadása kötelező, Kapcsolók:"
    echo " -f Csak forditas és futtatás"
    echo " -r run"
else
    case "$2" in
        -r) ./$1;;
        -f)g++ -Wall $1.cpp -o $1;
            echo "Forditas sikeres"
            ./$1;;
        *) echo "hiba, rosz kapcsoló" exit;;
    esac
fi
exit 0;