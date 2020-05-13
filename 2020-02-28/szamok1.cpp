#include <iostream>
using namespace std;

int main()
{
  cout << "Adjon meg majd meg mondjuk hogy melyik nagyobb vagy netán egyenlőek-e\n\n";
  int a, b;
  cout << "Első szám: ";
  cin >> a;
  cout << "Második szám: ";
  cin >> b;
  if (a > b)
    cout << "Az első a nagyobb\n";
  else if (a < b)
    cout << "A második a nagyobb\n";
  else
    cout << "Egyenlőek!\n";
  return 0;
}