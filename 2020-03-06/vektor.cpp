#include <iostream>
#define DIMENZIO 3
using namespace std;

int main() {
  double vektor[2][DIMENZIO];
  for (int i=0; i<2;i++){
    for (int u=0;u<DIMENZIO;u++) {
      cout << "Adja meg a(z) " << i+1 << " vektor " << u+1 << " koordinatajat: "; 
      cin>> vektor[i][u];
    }
  }
 
  cout << "A két vektor összege: ";
  for (int i=0; i<DIMENZIO;i++){
      cout << vektor[0][i]+vektor[1][i] << ' '; 
  }
  cout << endl;
  return 0;
}