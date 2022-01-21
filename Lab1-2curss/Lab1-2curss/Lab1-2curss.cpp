// Lab1-2curss.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h> // ����� ��� ����������� getch
#include <cstdlib>

using namespace std;

int *processArray(int range_min, int range_max, int *arr, int size) //�-� ������. ������� � ���������
{

	int x; // ������ � �����
	int maxNumber = range_min;
	int index = 0;


	for (int i = 0; i < size; i++) // ���������� ������� � ���������
	{
		arr[i] = rand() % (range_max - range_min + 1) + range_min; // ��������� � ����

		if (arr[i] >= maxNumber)
		{
			maxNumber = arr[i]; // ����. ����� �� �������
			index = i; // ������ ����. ����� � �������
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
	//���. � ���� ����. ��� �-��. + ������ �������
	const unsigned int size = 20;
	const int min = -20;
	const int max = 70;

	int array[size] = {}; //�������� ������� � ������

	processArray(min, max, array, size);

	for (int i = 0; i < size; i++) // ��������� ���� ��� ������ ������� �� �����
	{
		cout << "FinArray " << array[i] << "\n";
	}
		

	//getch(); //��������� �� ��������� ���� �� �� ������ ����� ������
	system("pause");
	return 0;

}




	

