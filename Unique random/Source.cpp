#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};

	for (int i = 0; i < n; i++)
	{
		bool unique; //���� ������������
		do
		{

		arr[i] = rand() % n;
		unique = true; //�����������, ��� ��������������� ���������� �����
		// �� ��� ����� ���������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) 
			{
				unique = false; // ���������� ��, ��� ����� � arr[i] �� ����������
				break;
			}
		}
		} while (!unique);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}