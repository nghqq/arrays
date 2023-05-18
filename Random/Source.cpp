#include <iostream>
using namespace std;

#define tab "\t"


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	int minRand;
	int maxRand;
	int buff;
	/*do
	{


		cout << "¬ведите минимальное возможное случайное число: "; cin >> minRand;
		cout << "¬ведите максимальное возможное случайное число: "; cin >> maxRand;
		if (maxRand <= minRand)
			cout << "Error: Ќулевой диапазон " << endl;
		system("PAUSE");
		system("CLS");

	} while (maxRand <= minRand);*/
	cout << "¬ведите минимальное и максимально возможное случайное число: "; cin >> minRand >> maxRand;
	if (maxRand < minRand)

		{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
		
		}
	if (minRand - maxRand<10)
	{
		maxRand = minRand+10;
	}


	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % maxRand;
	}
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		for (int j = 0; j < n-1; j++)
		{
			for (int i = 0; i < n; i++)
				if (arr[i] > arr[i + 1])
				{
					buff = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = buff;
				}
		}
	}

	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << tab;
	}
	cout << endl;
}
