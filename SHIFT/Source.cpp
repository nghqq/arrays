#include<iostream>
using namespace std;
#define tab "\t"
//#define SHIFTPLUS

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	

	
#ifdef SHIFTPLUS

	//вывод исходного массива на экран:
	int number_of_shift;
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{

			arr[i] = arr[i + 1];
		}

		arr[n - 1] = buffer;
	}
	//вывод сдвинутого массива
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << tab;
	}
	cout << endl;
#endif // SHIFTPLUS

	int number_of_shift;
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-2; i >= 0; i--)
		{

			arr[i+1] = arr[i];
		}

		arr[0] = buffer;
	}
	//вывод сдвинутого массива
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << tab;
	}
	cout << endl; 


}

