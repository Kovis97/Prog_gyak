#include <iostream>
using namespace std;

struct elem
{
    int szam;
    elem *kov;
};

elem *letrehoz()
{
    int szamok[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
    elem *horgony = NULL;
    for (int i = 0; szamok[i] != -1; i++)
    {
        elem *uj = new elem;
        uj->szam = szamok[i];
        uj->kov = horgony;
        horgony = uj;
    }
    return horgony;
}

void kiir(elem *horgony)
{
    elem* akt = horgony;
    while (akt != NULL)
    {
        cout << akt->szam << "\t";
        akt = akt->kov;
    }
    cout << "\n\n";
}

elem *beszurElore(elem *horgony, int a)
{
    elem *uj = new elem;
    uj->szam = a;
    uj->kov = horgony;
    return uj;
}

elem *beszurHatra(elem *horgony, int b)
{
    elem *uj = new elem;
    uj->szam = b;
    uj->kov = NULL;
    if (horgony == NULL)
    {
        return uj;
    }
    else
    {
        elem *akt = horgony;
        while (akt->kov != NULL)
        {
            akt = akt->kov;
        }
        akt->kov = uj;
        return horgony;
    }
}

void felszabadit(elem *horgony)
{
    while (horgony)
    {
        elem *kov = horgony->kov;
        delete horgony;
        horgony = kov;
    }
}

int main()
{
    cout << "Tömb elemeinke forditott kiirasa!\n";
    elem *horgony = letrehoz();
    kiir(horgony);
   
    horgony = beszurElore(horgony, 42);
    kiir(horgony);
    horgony = beszurHatra(horgony, 52);
    kiir(horgony);
    felszabadit(horgony);
    return 0;
}