#include <iostream>
#define MERET 10
using namespace std;

int main()
{
  double szam[MERET], atlag = 0;
  for (int i = 0; i < MERET; i++)
  {
    cout << i + 1 << ". szám: ";
    cin >> szam[i];
    atlag += szam[i];
  }

  atlag /= double(MERET);
  cout << "Atlag: " << atlag << endl;
  cout << "Atlag alatt szamok: ";
  for (int i = 0; i < MERET; i++)
  {
    if (szam[i] < atlag)
      cout << szam[i] << '\t';
  }
  cout << endl;
  return 0;
}
