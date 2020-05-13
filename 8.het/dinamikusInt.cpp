#include <iostream>
using namespace std;

int main()
{
    int *pi = new int;
    if (pi == NULL)
    {
        cerr << "Sikertelen memoriafoglalas!\n";
        return 1;
    }
    cout << "adjon meg egy szamot!\n";
    cin >> *pi;
    cout << *pi << endl;
    ;
    delete pi;
    return 0;
}