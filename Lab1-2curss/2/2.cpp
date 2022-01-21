// 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h> // ����� ��� ����������� getch
#include <cstdlib>

using namespace std;

long double fact(int N)
{
	if (N < 0) // ���� ������������ ���� ������������� �����
		return 0; // ���������� ����
	if (N == 0) // ���� ������������ ���� ����,
		return 1; // ���������� ��������� �� ���� - �� �����������, �� ��� 1 =)
	else // �� ���� ��������� �������
		return N * fact(N - 1); // ������ ��������.
}


void initArray(int array[][5]) // ���������� �������
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = fact(i + j);
		}
	}

}

int *transformArray(int array[][5]) // �� ���������� � ����������
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

void out(int *test) //������. �����
{
	for (int i = 0; i < 25; i++)
	{
		cout.width(8);
		cout << test[i];

	}
}








int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, ""); // �������� ���������

	int n;

	int array[5][5]; //�������� ������� � ������
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
