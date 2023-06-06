#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int MAX_HEX_CAPACITY = 8; //максимальная разрядность шестнадцатиричного числа
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	//for (start; stop;step)
	for (; decimal; decimal /= 16, i++)
	{
		hex[i] = decimal % 16;
		hex[i] += hex[i] < 10 ? 48 : 55;
	}
	for (i--; i >= 0; i--) // обратный порядок
	{
		cout << hex[i];
		{
		/*switch (hex[i])
		case 10: cout << "A" << endl; break;
		case 11: cout << "B"; break;
		case 12: cout << "C"; break;
		case 13: cout << "D"; break;
		case 14: cout << "E"; break;
		case 15: cout << "F"; break;
		default: cout << hex[i];*/
		}
	}
	cout << endl;
}