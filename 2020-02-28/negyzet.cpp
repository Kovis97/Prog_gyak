#include <iostream>
using namespace std;

int main() {
  int negyzet;
  cout << "Kérem adja meg a négyzet oldalának hosszát!: ";
  cin >> negyzet;
  int sor = -negyzet;
  while (sor <= negyzet) {
    int oszlop = -negyzet;
    while (oszlop <= negyzet) {
      if (negyzet*negyzet >= sor*sor + oszlop*oszlop) 
        cout << '*';
      else
        cout << ' ';
      oszlop++;      
    }
  sor += 2;
  cout << '\n';
  }
  return 0;
}