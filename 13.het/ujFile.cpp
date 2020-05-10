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
    }    
    return 0;
}