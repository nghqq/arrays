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

#ifdef ARR_3
	const int SIZE = 5;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "¬ведите массив: "; cin >> arr[i];

	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "массив " << i << " = " << arr[i] << "\t";
	}
#endif // ARR_3


#ifdef ARR_4
	const int SIZE = 5;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "¬ведите массив: "; cin >> arr[i];

	}
	cout << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";

	}
#endif // ARR_4

#ifdef ARR_5
	const int SIZE = 5;
	int arr[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "¬ведите массив: "; cin >> arr[i];
	}
	cout << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		sum += arr[i];
	}
	cout << sum << endl;

#endif // ARR_5


#ifdef ARR_6
	const int SIZE = 5;
	int arr[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "¬ведите массив: "; cin >> arr[i];
	}
	cout << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		sum += arr[i];
	}
	cout << sum / SIZE << endl;
#endif // ARR_6


#ifdef ARR_7
	const int SIZE = 5;
	int arr[SIZE];
	int max = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "¬ведите массив: "; cin >> arr[i];
	}
	cout << endl;

	
	for (int i = SIZE - 1; i >= 0; i--)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << max << endl;
#endif // ARR_7


#ifdef ARR_8
	const int SIZE = 5;
	int arr[SIZE];
	int min = 2147483647;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "¬ведите массив: "; cin >> arr[i];
	}
	cout << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << endl;
#endif // ARR_8



}
	


