#include <iostream>
using namespace std;

int main()
{
  int negyzet, i, j;
  cout << "Kérem adja meg a négyzet oldalának hosszát!: ";
  cin >> negyzet;
  for (i = 0; i < negyzet; i++)
  {
    for (j = 0; j < negyzet; j++)
    {
      if (j == 0 or i == 0 or negyzet - 1 == i or j == negyzet - 1 or j == i or negyzet - j == i + 1)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << '\n';
  }
  return 0;
}