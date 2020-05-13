#include <iostream>
using namespace std;

int main()
{
  int num, parosdb = 0, osszdb = 0;
  cout << "Kérem a számot: ";
  cin >> num;
  while (num != -1)
  {
    if (num % 2 == 0)
      cout << "Páros\n"
           << "A fele: " << num / 2 << " Ezek darab száma: " << ++parosdb << "\n";
    else
      cout << "Páratlan\n";
    cout << "[Eddigi számok: " << ++osszdb << "\n";
    cout << "Kérem a következőt: ";
    cin >> num;
  }
  cout << "\n"
       << osszdb << " szám érkezett, ebből " << parosdb << " páros\n";
  cout << "Program vége\n";
  return 0;
}