#include "datum.h"

void beolvas(datum *date)
{
    cout << "Adja meg az evet: ";
    cin >> date->ev;
    cout << "Adja meg a honapot: ";
    cin >> date->ho;
    cout << "Adja meg az napot: ";
    cin >> date->nap;
}

void kiir(datum *date)
{
    cout << date->ev << "." << date->ho << "." << date->nap;
}

int osszehasonlit(const datum *date1, const datum *date2)
{
    if (date1->ev != date2->ev)
    {
        return date1->ev - date2->ev;
    }
    else
    {
        if (date1->ho != date2->ho)
        {
            return date1->ho - date2->ho;
        }
        else
            return date1->nap - date2->nap;
    }
}