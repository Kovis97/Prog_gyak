#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MONODB 2
#define LETSZAM 10
#define MAXMAGAS 200
#define MINMAGAS 50
#define EV 2020
#define MAXEV 99
#define EVHATAR 2000

struct adatok
{
    string monogram;
    int eletkor, szulev, magassag;
};

struct elem
{
    adatok adat;
    elem *kov;
};

elem *letrehoz(int fo)
{
    elem *emberek = NULL;
    for (int i = 0; i < fo; i++)
    {
        elem *uj = new elem;
        uj->kov = emberek;
        for (int m = 0; m < MONODB; m++)
            uj->adat.monogram += char('A' + (rand() % ('Z' - 'A' + 1)));
        uj->adat.eletkor = 1 + rand() % MAXEV;
        uj->adat.szulev = EV - (uj->adat.eletkor);
        uj->adat.magassag = 50 + rand() % (MAXMAGAS - MINMAGAS + 1);
        emberek = uj;
    }
    return emberek;
}

elem *kerestorol(elem *emberek, int hatar)
{
    elem *elozo = NULL;
    for (elem *akt = emberek; akt; akt = akt->kov)
    {
        if (akt->adat.szulev >= 2000)
        {
            if (akt == emberek)
            {
                delete emberek;
                emberek = akt->kov;
            }else {
                elozo->kov = akt->kov;
                delete akt;
                akt = elozo;
            }
        } else 
            elozo = akt;
    }
    return emberek;
}

void kiir(elem *emberek)
{
    elem *akt = emberek;
    while (akt != NULL)
    {
        cout << "Az " << akt->adat.monogram << ". szemely adatai: \n"
             << "Eletkor:\t" << akt->adat.eletkor
             << "\nSzul. ev:\t" << akt->adat.szulev
             << "\nMagassag:\t" << akt->adat.magassag;
        akt = akt->kov;
        cout << "\n\n";
    }
}

void felszabadit(elem *emberek)
{
    while (emberek)
    {
        elem *akt = emberek;
        delete emberek;
        emberek = akt->kov;
    }
}

int main()
{
    srand(time(NULL));
    cout << "Generaltunk " << LETSZAM << " fonyi ember adatait!\nEzek:\n";
    elem *emberek = letrehoz(LETSZAM);
    kiir(emberek);
    cout << "Fiatalok törlése! ";
    emberek = kerestorol(emberek, EVHATAR);
    cout << "\n\n\n";
    kiir(emberek);
    felszabadit(emberek);
    return 0;
}