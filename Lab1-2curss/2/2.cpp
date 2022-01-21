// 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h> // нужно для подключения getch
#include <cstdlib>

using namespace std;

long double fact(int N)
{
	if (N < 0) // если пользователь ввел отрицательное число
		return 0; // возвращаем ноль
	if (N == 0) // если пользователь ввел ноль,
		return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
	else // Во всех остальных случаях
		return N * fact(N - 1); // делаем рекурсию.
}


void initArray(int array[][5]) // заполнение массива
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = fact(i + j);
		}
	}

}

int *transformArray(int array[][5]) // из двумерного в одномерный
{
	int *arr = new int[25];

	int n = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[j + n] = array[i][j];
		}
		n += 5;		
	}
	
	return arr;
}

void out(int *test) //формат. вывод
{
	for (int i = 0; i < 25; i++)
	{
		cout.width(8);
		cout << test[i];

	}
}








int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, ""); // Включаем кириллицу

	int n;

	int array[5][5]; //создание массива с нулями
	initArray(array);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "   " << array[i][j];
		}
		cout << "\n";
	}

	int *test = transformArray(array);

	
	cout <<endl;
	out(test);
	cout << endl;

	system("pause");
	return 0;
}
