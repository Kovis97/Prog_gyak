#include <iostream>
#include <fstream>

using namespace std;

streampos meretszamit(ifstream &f)
{
    streampos akt, meret;
    akt = f.tellg();
    f.seekg(0, ios_base::end);
    meret = f.tellg();
    f.seekg(akt, ios_base::beg);
    return meret;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "A program helyes használata:\n\t" << argv[0]
             << " fajl_azonosito\n";
        return 1;
    }
    ifstream f(argv[1], ios_base::binary);
    if (not f.is_open())
    {
        cout << argv[1] << "nem nyithato meg!\n";
        return 2;
    }
    streampos meret = meretszamit(f);
    int i = 0;
    char c;
    while (f.get(c))
    {
        i++;
        if (c<' ' and c!='\n' and c!='\t' and c!='\r' and (c!=26 or i!=meret))
        {
            cout << "A(z) " << argv[1] << " valoszinuleg binaris\n";
            f.close();
            return 0;
        }        
    }
    cout << "A(z) " << argv[1] << " valoszinuleg szoveges\n";
    f.close();
    return 0;
}