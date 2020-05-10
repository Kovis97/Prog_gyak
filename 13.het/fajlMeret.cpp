#include <iostream>
#include <fstream>

using namespace std;

#define NEV "fajlMeret.cpp"
 
int main() {
    ifstream f(NEV, ios_base::binary);
    if (f.is_open())
    {
        f.seekg(0, ios_base::end);
        streampos meret = f.tellg();
        cout << "A falj merete: " << meret << " bajt\n";
    } else
    {
        cerr << "Hiba a falj megnyitasakor!";
    }    
    return 0;
}