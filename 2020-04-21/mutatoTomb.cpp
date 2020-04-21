#include <iostream>

#define SZAMOK_DB 6
#define MUTAOK_DB 10

using namespace std;

int main() {
  int szamok[SZAMOK_DB];
  cout << "Adjon meg 6 db. egész számot!\n";
  for (int i=0; i<SZAMOK_DB; i++){
   cin >> szamok[i];
  }

  int szam, *mutatok[MUTAOK_DB];
  cout << "Adjon meg újabb 10 db. számot, melyek\n""vagy elofordulnak az elobb megadottak\n""kozott, vagy nem!\n";
  for (int j=0; j<MUTAOK_DB; j++) {
    cin >> szam;
    int i;
    for (i=0; i<SZAMOK_DB and szamok[i] != szam;i++)
    if (i==SZAMOK_DB){
      mutatok[j] = NULL;
    } else {
      //mutatok[j] = &szamok[i];
      mutatok[j] = szamok+i;
    }
  }

  cout << "A mutatok erteke, es az ott levo ertekek:\n";
  for (int j=0;j<MUTAOK_DB;j++) {
    cout << "A mutatok tomb " << j << ". indexu elemenek tartalma: " << mutatok[j];
    if (mutatok[j] != NULL) {
     cout << ", ezen a cimen tarolt ertek: " << *mutatok[j];
    }
    cout << endl;
  }
  return 0;
}