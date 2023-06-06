#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];

	int minRnd = 70;
	int maxRnd = 80;
	
	

	for (int i = 0; i <= n-1; i++)
	{
		arr[i] = rand()%(maxRnd-minRnd)+minRnd;
		cout << " " << arr[i];
		
	
	}
	cout << endl;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if (i!=j)
			{
				if (arr[i] == arr[j]) 
				{

					cout << endl << i << " " << arr[i];
	
				}
			}
			
		}
				
		
	}
	cout << endl;
	

}