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
  int hur[] = {6, 7, 8, 12};
  string hangszedok[] = {"humbucker", "single coil"};
  int db = rand() % (MAX_DB + 1);
  for (int i = 0; i < db; i++)
  {
    gitar *uj = new gitar;
    uj->hurok_szama = hur[rand() % 4];
    uj->ar = rand() % (MAX_AR - MIN_AR) + MIN_AR;
    uj->hangszedo = hangszedok[rand() % 2];
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
    lista = uj;
  }
  else
  {
    gitar *akt = lista;
    while (akt->kov != NULL)
    {
      akt = akt->kov;
    }
    akt->kov = uj;
  }
  return lista;
}

gitar *szures(gitar *lista)
{
  gitar *szurt = NULL;
  gitar *szurtUtolso = NULL;
  while (lista != NULL)
  {
    if ((lista->hurok_szama == 6 and lista->hangszedo == "single coil") or (lista->hurok_szama == 8 and lista->hangszedo == "humbucker"))
    {
      gitar *uj = new gitar;
      uj->ar = lista->ar;
      uj->hurok_szama = lista->hurok_szama;
      uj->hangszedo = lista->hangszedo;
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
    lista = lista->kov;
  }
  return szurt;
}

gitar *draga(gitar *lista)
{
  gitar *szurt = NULL;
  gitar *szurtUtolso = NULL;
  double atlag = 0.0;
  int db = 0;
  gitar *akt = lista;
  while (akt != NULL)
  {
    db++;
    atlag += akt->ar;
    akt = akt->kov;
  }
  atlag /= db;
  while (lista != NULL)
  {
    if (lista->ar > atlag)
    {
      gitar *uj = new gitar;
      uj->ar = lista->ar;
      uj->hurok_szama = lista->hurok_szama;
      uj->hangszedo = lista->hangszedo;
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
    lista = lista->kov;
  }
  return szurt;
}

gitar *olcso(gitar *lista)
{
  int min_ar = MAX_AR + 1;
  gitar *akt = lista;
  gitar *legolcsobb = NULL;
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