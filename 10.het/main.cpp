#include <iostream>
#include "ceg.h"

#define CEGDB 5
using namespace std;

int legregebbi(const ceg *cegek)
{
  int min = 0;
  const datum *alapit = &cegek->alapitas;
  for (int i = 1; i < CEGDB; i++)
  {
    if (osszehasonlit(alapit, &cegek[i].alapitas) > 0)
    {
      min = i;
      alapit = &cegek[i].alapitas;
    }
  }
  return min;
}

int main()
{
  cout << "Ceg adat nyilvan tarto!\n"
       << "Adja meg " << CEGDB << " db. ceg adatait!\n";
  ceg cegek[CEGDB];
  for (int i = 0; i < CEGDB; i++)
  {
    cout << "A(z) " << i + 1 << " ceg adatai: \n";
    beolvas(cegek + i);
  }
  cout << "A legregebb alapitott ceg: \n";
  kiir(cegek + legregebbi(cegek));
  cout << "Telephely adatok kiirasa helyseg nev alapjan ures sorig!";
  cin.ignore();
  string helyseg;
  while (cout << "\n\nHelyseg: ", getline(cin, helyseg), helyseg.length() > 0)
  {
    for (int c = 0; c < CEGDB; c++)
    {
      for (int t = 0; t < cegek[c].telepDb; t++)
      {
        if (helyseg == cegek[c].telephelyek[t].helyseg)
        {
          cout << "A ceg neve: " << cegek[c].nev << " A telephely adatai: \n";
          kiir(cegek[c].telephelyek + t);
        }
      }
    }
  }
  for (int i = 0; i < CEGDB; i++)
  {
    torol(cegek + i);
  }
  return 0;
}