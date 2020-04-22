#include <iostream>
#include <cstdlib>
using namespace std;

struct koord {
    int x,y;
};

/*
void beolvas(koord *pontok){
    cout << "X: ";cin >> pontok->x;
    cout << "Y: ";cin >> pontok->y;
}

int main() {
    koord *pontok = new koord;
    if (pontok==NULL) {
        cerr << "Memoriafoglalasi hiba."<< endl;
        return 1;
    }
    
    cout << "Ajdjon meg két koordinatat\n";
    beolvas(pontok); */

koord* beolvas(){
    koord* pontok = new koord;
    if (pontok==NULL) {
        cerr << "Memoriafoglalasi hiba."<< endl;
        exit(1);
    }
    cout << "X: ";cin >> pontok->x;
    cout << "Y: ";cin >> pontok->y;
    return pontok;
}

int main() {
    koord* pontok;    
    cout << "Adjon meg két koordinatat\n";
    pontok = beolvas();
    cout << "A beolvasott koordinatak\n";
    cout << "X: "<< pontok->x << endl;
    cout << "Y: "<< pontok->y << endl;
    delete pontok;
    return 0;
}