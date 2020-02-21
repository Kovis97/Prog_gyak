#include<iostream>
using namespace std;

int main() {
	cout << "Adjon meg ket szamot\n";
	int a, b;
	cout << "elso:";
	cin >> a;
	cout << "masodik:";
	cin >> b;
	cout << "Osszeguk: " << a+b << "\nSzorzatuk: " << a*b << "\nEzek kulonbsege: " << a*b-(a+b);
	return 0;
}