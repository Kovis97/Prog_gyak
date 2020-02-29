#include<iostream>
using namespace std;

int main() {
    int i=0,j=0, lepcso;
    cout << "Kérjük adja meg a lépcsó magasságát\n Magasság: ";
    cin >> lepcso;
    while (i != lepcso) {
        j=1;
        while ( j <= i) {
            cout << "  ";
            j++;
        }
        j=lepcso-1;
        while ( j >= i) {
            cout << "* ";
            j--;
        }
        cout << '\n';
        i++;
    }
    return 0;
}