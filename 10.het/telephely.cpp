#include "telephely.h"

void beolvas(telep* t){
  cout << "A telephely helysege: "; cin >> t->helyseg;
  cout << "Adja meg az alapitas datumat: "; 
  beolvas(&t->alapitas);
  cout << "Adja meg az utolso ev ar bevetelet: "; cin >> t->bevetel;
}

void kiir(telep* t){
  cout << "A telephely helysege: " << t->helyseg << endl;
  cout << "Az alapitas datumat: " << endl; 
  kiir(&t->alapitas);
  cout << "/nAz utolso ev ar bevetele: " << t->bevetel << endl;
}