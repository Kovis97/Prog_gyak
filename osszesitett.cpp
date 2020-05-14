// Fejl fájlok sora
#include <iostream> // e-nélkül nincs szabvány bemet és amúgy program sem
#include <fstream>  // fájlok kezelésehez szükséges
#include <cstring>  // pl.: string.length(); strcpy(mszoveg, szoveges.c_str()) // string másoló;
/* #include "ceg.h"    // kulso fajl csatolása
            ceg.h << 
                    #ifndef CEG         
                    #define CEG     // szükséges fej fájllok bekapcsolása és az adat strucktúra és függyvények definiálása
                    #endif
                ;
            ceg.cpp << 
                    #include "ceg.h"
                    // definiált függyvények használata */

// A szabvány bemenet könnyebb elérése miatt pl.: std::cout helyet csak cout
using namespace std;

// Állandók definiciója
#define NEV "CSupa betu"

// Structurák definifiója

int stb() { return 0; } // fügvény melynek van vissza térési értéke
void stb1() {}          // Ennek így nincs vissza térési értéke, de ha memória címet kap akkor képes módosítani az értékek pl.: int *mutato; de ha ne szeretnénk módositani akkor használjuk a const int* a -t; valamint van lehetőség referencia átadásra is ekkor egy sima változót küldünk a programunknak
//pl.:stremapos f = fuggveny(f) --> fugyveny(streamapos &f) {}

// Általános célú függvények

streampos fajlmeret(ifstream &f)
{
    streampos akt, meret;
    akt = f.tellg();
    f.seekg(0, ios_base::end);
    meret = f.tellg();
    f.seekg(akt, ios_base::beg);
    return meret;
}

int fibonacci(int i)
{

    if (i == 0)
    {
        return 0;
    }

    if (i == 1)
    {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}

// A program indítója
int main(int argc, char *argv[]) // a program hívásakor megadott paraméterek
                                 // argc parameterek száma
                                 // argv[] tömbje
                                 // argv[0] a program inditása pl.: ./main ; 13.het/./main;
                                 // ./13.het/main
                                 // argv[1] az elso parameterunk
{
    string szoveges;
    char *mszoveg;
    strcpy(mszoveg, szoveges.c_str());

    int *pi = new int; // int meretu memoria lefoglalása
    if (pi == NULL)    // memiroa foglalas sikerességt vizsgálja
    {
        cerr << "Sikertelen memoriafoglalas!\n";
        return 1;
    }

    // láncolt lista:
#include "11.het/elso.cpp"

    // random függyvény használat plusz hívás
#include <cstdlib>
#include <ctime>
    srand(time(NULL)); // program elejen kell definiálni
#define MAX
#define MIN
    int eletkor = MIN + rand() % MAX - MIN + 1;

    // fajl nyitás, használat

    ifstream fo(NEV, ios_base::binary); //binaárisan csak olvasásra
    ofstream fi(NEV);                   // irasra
    if (fo.is_open() and fi.is_open())
    {
        //Ha megvan nyitva itt tudom használni
        streampos meret = fajlmeret(fo);
        fi << "sajt";
        char c, *mc[meret];
        string szoveg;
        fo.get(c); // karaktereket olvasbe a fájlból
        getline(fo, szoveg);
        char *tomb = new char[meret]; // egesz fajl beolvasasa
        fo.read(tomb, meret);
        for (char *m = tomb; m < tomb + meret; m++)
        {
            cout << *m;
        }

        fo.close();
        fi.close();
    }
}