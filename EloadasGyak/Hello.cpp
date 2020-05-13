#include <iostream>
using namespace std;

int main()
{
	cout << "Adjon meg ket szamot\n";
	int a, b;
	cout << "elso:";
	cin >> a;
	cout << "masodik:";
	cin >> b;
	cout << "Osszeguk: \t" << a + b << "\nSzorzatuk: \t" << a * b << "\nEzek kulonbsege: \t" << a * b - a + b;
	return 0;
}