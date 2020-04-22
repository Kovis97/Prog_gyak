#include <iostream>
using namespace std;

int main() {
  int db;
  cout << "Adja meg a tömb méretét: ";
  cin >> db;
  int* tomb = new int[db];
  if (tomb==NULL)
  {
    cerr << "Memoriafoglalasi hiba."<< endl;
    return 1;
  }
  
  cout << "Adja meg "<< db <<" számot!\n";
  for (int i = 0; i < db; i++)
  {
    cout << i+1 << ". szam: ";
    cin >> *(tomb+i);
  }
  cout << "A számok:\n";
  for (int i = 0; i < db; i++)
  {
    cout << i << ". szam: " << *(tomb+i) << endl;
  }
  delete[] tomb;
  return 0;
}