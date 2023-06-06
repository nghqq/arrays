#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;

	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		// ѕроверить, встречалось ли выбранное значение раньше
		bool met_before = false; // предполагаем, что выбраное число раньше не встречалось 
		// но это нужно проверить 
		//ѕоиск повторений
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true; // запоминаем, что число встречалось ранее
				break; // ключевое слово 'break' прерывает текущую итерацию и все последующие
			}
			if (met_before)continue; // 'continue' прерывает текущую итерацию и переходит к следующей
		}
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		//if (count)cout << "«начение" << " " << arr[i] << " " << "повтор€етс€" << " " << count << " раз" << endl;
		if (count)printf("«начение %d повтор€етс€ %d раз\n", arr[i], count);
	}
}