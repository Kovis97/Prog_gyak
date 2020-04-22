#include <iostream>
using namespace std;

#define KOORDINATA_DB 3

struct Koordinatak
{
    double x, y, z;
};


int main() {
    Koordinatak pontok[KOORDINATA_DB];
    cout << "Adjon meg " << KOORDINATA_DB << ". darab térbeli pontott x y z sorrendben!\n";
    for (int i = 0; i < KOORDINATA_DB; i++) {
        cout << i+1 << ". pont koordinatai: ";
        cin >> (pontok+i)->x >> (pontok+i)->y >> (pontok+i)->z;
    }
    cout << "A megadott pontok: \n";
    for (int i = 0; i < KOORDINATA_DB; i++) {
        cout << i+1 << ". pont" <<
        "\tx: " << (pontok+i)->x <<
        "\ty: " <<  (pontok+i)->y << 
        "\tz: " << (pontok+i)->z << endl;
    }
    return 0;
}