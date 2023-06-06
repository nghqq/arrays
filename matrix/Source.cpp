#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	const int ROWS = 10;
	const int COLS = 10;

	int arr_1[ROWS][COLS] = {};
	int arr_2[ROWS][COLS] = {};
	int total_matrix[ROWS][COLS] = {};
	int diff_matrix[ROWS][COLS] = {};
	int product_matrix[ROWS][COLS] = {};


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr_1[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr_2[i][j] = rand() % 10;
		}
	}
	cout << "Первая матрица" << endl;
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr_1[i][j] << "\t";

		}
		cout << endl;

		

	}
	cout << endl;

	cout << "Вторая матрица" << endl;
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		
		for (int j = 0; j < COLS; j++)
		{
			cout  << arr_2[i][j] << "\t";
		}
		cout << endl;

	}

	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			total_matrix[i][j] = arr_1[i][j] + arr_2[i][j];
		
		}
	}

	
	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			diff_matrix[i][j] = arr_1[i][j] - arr_2[i][j];
		}
		cout << endl;
	}

	cout << "Результат сложения матриц" << endl;
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			cout << total_matrix[i][j] << "\t";
			
		}
		cout << endl;
	}
	cout << endl;

	cout << "Результат вычитания матриц" << endl;
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			cout << diff_matrix[i][j] << "\t";
		}
		cout << endl;

	}

	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			product_matrix[i][j] = arr_1[i][j] * arr_2[i][j];
		}
		cout << endl;
	}
	
	cout << "Результат умножение матриц" << endl;
	cout << endl;
	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			cout << product_matrix[i][j] << "\t";
		}
		cout << endl;

	}
}