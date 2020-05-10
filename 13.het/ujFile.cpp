#include <iostream>
#include <fstream>

#define NEV "elsoFajl.txt"

using namespace std;

int main() {
    ofstream f(NEV);
    if (f.is_open())
    {
        f << "Ezt a fajlt C++ nyelven irt programmal hoztam letre!\n";
        f << "Juppi!\n";
        f << "Hello Word!\n";
        f.close();
    } else {
        cerr << "Hiba a fájl létrehozasakor!";
        return 0;
    }
    ifstream fo(NEV);
    if (fo.is_open()) {
        string sor;
        while(getline(fo, sor)) {
            cout << sor << endl;
        }
        fo.close();
    } else {
        cerr << "Hiba a fajl olvasasakor!";
    }
    return 0;
}