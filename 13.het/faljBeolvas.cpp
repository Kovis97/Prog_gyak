#include <iostream>
#include <fstream>

using namespace std;

#define NEV "faljBeolvas.cpp"

int main() {
    ifstream f(NEV, ios_base::binary);
    if (f.is_open())
    {
        f.seekg(0, ios_base::end);
        streampos meret = f.tellg();
        f.seekg(0, ios_base::beg);
        char* tomb =new char[meret];
        f.read(tomb, meret);
        for (char* m = tomb; m <tomb+meret; m++)
        {
            cout << *m;
        }
        cout << endl;
        delete[] tomb;
        f.close();
    } else {
        cerr << "Fajl olvasasi hiba!";
    }
    return 0;
}