// Lab1-2curss.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h> // нужно для подключения getch
#include <cstdlib>

using namespace std;

int *processArray(int range_min, int range_max, int *arr, int size) //ф-я заполн. массива в диапозоне
{

	int x; // ввести с клавы
	int maxNumber = range_min;
	int index = 0;


	for (int i = 0; i < size; i++) // заполнение массива в диапозоне
	{
		arr[i] = rand() % (range_max - range_min + 1) + range_min; // рандомайз в диап

		if (arr[i] >= maxNumber)
		{
			maxNumber = arr[i]; // макс. число из массива
			index = i; // индекс макс. ичсла в массиве
		}
		cout << "InputArray " << arr[i] << "\n";
		
	}

	cout << "" << "\n";
	cout << "Max. Item= " << maxNumber << "\n";

	std::cout << "Input x: ";
	std::cin >> x;

	cout << "x= " << x << "\n";
	cout << "" << "\n";

	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i] / maxNumber;
		cout << "OutputArray " << arr[i] << "\n";
	}

	for (int i = 0; i < size; i++)
	{
		
		if (i > index)
		{
			arr[i] = x;
		}
		

	}


	return arr;
}



int _tmain(int argc, _TCHAR* argv[])
{
	//мин. и макс знач. для ф-ии. + размер массива
	const unsigned int size = 20;
	const int min = -20;
	const int max = 70;

	int array[size] = {}; //создание массива с нулями

	processArray(min, max, array, size);

	for (int i = 0; i < size; i++) // Запускаем цикл для вывода массива на экран
	{
		cout << "FinArray " << array[i] << "\n";
	}
		

	//getch(); //Программа не закроется пока мы на нажмем любую кнопку
	system("pause");
	return 0;

}




	

