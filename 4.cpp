#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Произведение всех целых чисел от 8 до 15: ";
	int n = 1;
	for (int i = 8; i < 16; ++i) { n = n * i; }
	cout << n << endl;
	cout << "Произведение от а до 20:\n"
		<< "Enter a:";
	int a;
	cin >> a;
	for (int i = a + 1; i < 21; ++i) { a = a * i; }
	cout << a << endl;
	int b;
	cout << "Произведение от 1 до b:\n"
		<< "Enter b:";
	cin >> b;
	n = 1;
	for (int i = 1; i < b + 1; ++i) { n = n * i; }
	cout << n << endl;
	int a1, b1;
	cout << "Произведение от a до b:\n"
		<< "Enter a,b:";
	cin >> a1 >> b1;
	for (int i = a1 + 1; i < b1 + 1; ++i) { a1 = a1 * i; }
	cout << a1 << endl;
}
