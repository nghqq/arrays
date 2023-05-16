#include <iostream>
using namespace std;

//#define ARR_2
//#define ARR_3
//#define ARR_4
//#define ARR_5
//#define ARR_6
//#define ARR_7
//#define ARR_8

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARR_2
	const int SIZE = 5;
	int arr[SIZE];
	arr[2] = 123;
	cout << arr[2] << endl;
#endif // ARR_2

	const int SIZE = 5;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Введите массив: "; cin >> arr[i];

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "массив " << i << " = " << arr[i] << "\t";
	}

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";

	}

	int sum = 0;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;

	cout << "Среднее-арифметическое: " << (double)sum / SIZE << endl;

	int min, max;
	min = max = arr[0];
	for (int i = SIZE - 1; i >= 0; i--)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << endl;
}