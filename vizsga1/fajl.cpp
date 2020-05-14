#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define MAX_DB 10
#define MIN_AR 200000
#define MAX_AR 5000000

struct gitar
{
    int hurok_szama;
    int ar;
    string hangszedo;
    gitar *kov;
};

gitar *general()
{
    gitar *lista = NULL;
    int gitardb = rand() % MAX_DB;
    for (int i = 0; i < gitardb; i++)
    {
        gitar *uj = new gitar;
        uj->hurok_szama = 6 + rand() % 4;
        if (uj->hurok_szama == 9)
            uj->hurok_szama = 12;
        uj->ar = MIN_AR + rand() % MAX_AR - MIN_AR + 1;
        uj->hangszedo = rand() % 2 ? "humbucker" : "single coil";
        uj->kov = lista;
        lista = uj;
    }
    return lista;
}

gitar *hozzafuz(gitar *lista, int hurok_szama, int ar, string hangszedo)
{
    gitar *uj = new gitar;
    uj->hurok_szama = hurok_szama;
    uj->ar = ar;
    uj->hangszedo = hangszedo;
    uj->kov = NULL;
    if (lista == NULL)
    {
        return uj;
    }
    else
    {
        gitar *akt = lista;
        while (akt->kov != NULL)
        {
            akt = akt->kov;
        }
        akt->kov = uj;
        return lista;
    }
}

gitar *szures(gitar *lista)
{
    gitar *szurt = NULL;
    gitar *szurtUtolso;
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        if ((akt->hurok_szama == 6 and akt->hangszedo == "single coil") or (akt->hurok_szama == 8 and akt->hangszedo == "humbucker"))
        {
            gitar *uj = new gitar;
            uj->ar = akt->ar;
            uj->hurok_szama = akt->hurok_szama;
            uj->hangszedo = akt->hangszedo;
            uj->kov = NULL;
            if (szurt == NULL)
            {
                szurt = uj;
            }
            else
            {
                szurtUtolso->kov = uj;
            }
            szurtUtolso = uj;
        }
    }
    return szurt;
}

gitar *draga(gitar *lista)
{
    double atlag = 0.0;
    int db = 0;
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        db++;
        atlag += akt->ar;
    }
    atlag /= db;
    gitar *dragabb = NULL;
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        if (akt->ar > atlag)
        {
            gitar *uj = new gitar;
            uj->ar = akt->ar;
            uj->hurok_szama = akt->hurok_szama;
            uj->hangszedo = akt->hangszedo;
            uj->kov = NULL;
            if (dragabb == NULL)
            {
                dragabb = uj;
            }
            else
            {
                uj->kov = dragabb;
            }
            dragabb = uj;
        }
    }
    return dragabb;
}

gitar *olcso(gitar *lista)
{
    int minAr = MAX_AR + 1;
    gitar *olcso = NULL;
    if (lista == NULL)
    {
        return NULL;
    }
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        if (akt->hurok_szama == 12 and akt->ar < minAr)
        {
            minAr = akt->ar;
            olcso = new gitar,
            olcso->ar = akt->ar;
            olcso->hurok_szama = akt->hurok_szama;
            olcso->hangszedo = akt->hangszedo;
            olcso->kov;
        }
    }
    return olcso;
}

void kiir(gitar *g)
{
    while (g)
    {
        cout << g->ar << endl;
        cout << g->hangszedo << endl;
        cout << g->hurok_szama << endl;
        g = g->kov;
    }
}

int main()
{
    srand(time(NULL));
    gitar *gitarok = general();
    kiir(gitarok);
    cout << "\n\n6 és 8 szűrt: \n";
    kiir(szures(gitarok));
    cout << "\n\nDraga gitarok:\n";
    kiir(draga(gitarok));
    cout << "\n\nOlcsó 12 huros gitarok: \n";
    kiir(olcso(gitarok));
}