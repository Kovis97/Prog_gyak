#include <iostream>
using namespace std;

int main() {
  int negyzet, i=0, j=0;
  cout << "Kérem adja meg a négyzet oldalának hosszát!: ";
  cin >> negyzet;
  for (i = 1; i <= negyzet; i++)
  {
    for (j = 1; j <= negyzet; j++)
    {
      if (i == 1 or i == negyzet or j % negyzet == 0)
        cout << "* ";
      else cout << "  ";
    }
    cout << '\n';
  }
  return 0;
}