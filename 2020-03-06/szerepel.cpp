#include <iostream>
#define MERET 4
using namespace std;

int main()
{
  int szamok[MERET], viszgaltszam, elofordul = 0;
  cout << "Adjon meg számokat: \n";
  for (int i = 0; i < MERET; i++)
  {
    cout << i + 1 << ". szam: ";
    cin >> szamok[i];
  }

  do
  {
    cout << "Vizsgált szám: ";
    cin >> viszgaltszam;
    elofordul = 0;
    for (int i = 0; i < MERET; i++)
      if (szamok[i] == viszgaltszam)
        elofordul++;
    cout << "Elofordulas: " << elofordul << '\n';
  } while (elofordul);
  cout << "Kilepes!" << endl;
  return 0;
}