#include <iostream>
using namespace std;

int main()
{
  cout << "Kérem adjon meg számokat.\nKét egymás után azonos szám esetén kilépünk!\n";
  int akt = 0, elozo;
  do
  {
    elozo = akt;
    cout << "Kérek egy számot: ";
    cin >> akt;
  } while (elozo != akt);
  return 0;
}