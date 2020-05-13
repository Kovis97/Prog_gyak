#include "ceg.h"

void beolvas(ceg *c)
{
    cout << "Adja meg a ceg nevet: ";
    cin >> std::ws; //Kitakaritja a puffert a getline hivasa elott
    getline(cin, c->nev);
    cout << "Alapitas ideje: \n";
    beolvas(&c->alapitas);
    cout << "Adja meg a telehelyek szamat: ";
    cin >> c->telepDb;
    c->telephelyek = new telep[c->telepDb];
    if (c->telephelyek == NULL)
    {
        cerr << "Sikertelen foglalas!";
        exit(0);
    }
    for (int i = 0; i < c->telepDb; i++)
    {
        cout << i + 1 << ". telephely: \n";
        beolvas(c->telephelyek + i);
    }
}

int evesBevetel(const ceg *c)
{
    int bevetel = 0;
    for (int i = 0; i < c->telepDb; i++)
    {
        bevetel += (c->telephelyek + i)->bevetel;
    }

    return bevetel;
}

void kiir(const ceg *c)
{
    cout << "A " << c->nev << " ceg ";
    kiir(&c->alapitas);
    cout << " alapitasu és\n"
         << c->telepDb << " telephelyel rendelkezik, ezek adati:\n";
    for (int i = 0; i < c->telepDb; i++)
    {
        kiir(c->telephelyek + i);
    }
    cout << "Osszesitett bevetel: " << evesBevetel(c) << endl;
}

void torol(const ceg *c)
{
    delete[] c->telephelyek;
}