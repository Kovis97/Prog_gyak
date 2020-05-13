#include <iostream>
#include <cstring>
using namespace std;

#define DB 100

int main()
{
  //char szoveg[DB+1];
  string szoveges;
  char *mszoveg;
  cout << "Adjon meg egy karakter láncot!\n";
  cin >> szoveges;
  /*mszoveg = new char[strlen(szoveg)+1];
  strcpy(mszoveg,szoveg);
  cout << "a szoveg: "<< szoveg << endl; */
  if (!(szoveges.length() < DB))
  {
    cout << "A szöveg tul hosszu!\n";
    return 0;
  }

  mszoveg = new char[szoveges.length() + 1];
  if (mszoveg == NULL)
  {
    cerr << "Memória foglalás sikerten!\n";
    return -1;
  }

  strcpy(mszoveg, szoveges.c_str());
  cout << "a szoveg: " << szoveges << endl;

  return 0;
}