#include <iostream>
#include <ctime>
#include <stdlib.h>
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
    int gitardb = rand() % MAX_DB;
    gitar *gitarok = NULL;
    for (int i = 0; i < gitardb; i++)
    {
        gitar *uj = new gitar;
        uj->hurok_szama = 6 + rand() % 4;
        if (uj->hurok_szama == 9)
            uj->hurok_szama = 12;
        uj->ar = MIN_AR + rand() % MAX_AR - MIN_AR + 1;
        uj->hangszedo = rand() % 2 ? "humbucker" : "single coil";
        uj->kov = gitarok;
        gitarok = uj;
    }
    return gitarok;
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
    gitar *szurtkov;
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        if ((akt->hurok_szama == 6 and akt->hangszedo == "single coil") or (akt->hurok_szama == 8 and akt->hangszedo == "humbucker"))
        {
            if (szurt == NULL)
            {
                szurt = akt;
                szurtkov = szurt;
            }
            else
            {
                gitar *uj = new gitar;
                uj = akt;
                uj->kov = NULL;
                szurt->kov = uj;
                szurt = uj;
            }
        }
    }
    return szurt;
}

gitar *draga(gitar *lista)
{
    int atlag = 0;
    int db = 0;
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        atlag += akt->ar;
        db++;
    }
    atlag = atlag / db;
    gitar *dragabb = NULL;
    for (gitar *akt = lista; akt; akt = akt->kov)
    {
        if (akt->ar > atlag)
        {
            gitar *uj = new gitar;
            uj = akt;
            uj->kov = dragabb;
            dragabb = uj;
        }

        db++;
    }
    return dragabb;
}

gitar *olcso(gitar *lista)
{
    int min_ar = MAX_AR + 1;
    gitar *akt = lista;
    gitar *legolcsobb = new gitar;
    while (akt != NULL)
    {
        if (akt->hurok_szama == 12 and akt->ar < min_ar)
        {
            min_ar = akt->ar;
            legolcsobb = new gitar;
            legolcsobb->ar = akt->ar;
            legolcsobb->hurok_szama = akt->hurok_szama;
            legolcsobb->hangszedo = akt->hangszedo;
            legolcsobb->kov = NULL;
        }
        akt = akt->kov;
    }
    return legolcsobb;
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