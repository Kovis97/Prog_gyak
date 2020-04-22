#include <iostream>
using namespace std;

struct koord {
    int x,y;
};

void beolvas(koord *pontok){
    cout << "X: ";cin >> pontok->x;
    cout << "Y: ";cin >> pontok->y;
}

int main() {
    koord *pontok = new koord;
    cout << "Ajdjon meg két koordinatat\n";
    beolvas(pontok);
    cout << "X: "<< pontok->x << endl;
    cout << "Y: "<< pontok->y << endl;
    delete pontok;
    return 0;
}