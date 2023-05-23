#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	int n;
	int bin = 2;
	int b;
	int percent;
	
	cout << "Введите десятичное число: "; cin >> n;
	int buffer = n;
	

	for (int i = n; i !=0; i--)
	{
		b = buffer % 2;
		percent = buffer / bin;
		cout << b << " " << percent;
	}
}