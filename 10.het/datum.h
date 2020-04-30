#ifndef DATUM
#define DATUM

#include <iostream>
using namespace std;

struct datum {
  int ev;
  char ho;
  char nap;
};

void beolvas(datum*);
void kiir(const datum*);
int osszehasonlit(const datum*,const datum*);

#endif