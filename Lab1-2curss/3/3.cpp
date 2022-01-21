// 3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <conio.h> // нужно для подключения getch
#include <cstdlib>
#include <string>
#include <fstream>


using namespace std;

int fun(char s1[], char s2[])
{

	int size;
	int x1;
	int x2;
	int end;


	if (strlen(s1) > strlen(s2))
		size = strlen(s1);
	else(size = strlen(s2));
	

	for (int i = 0; i < size; i++)
	{
		if (s1[i] == s2[i])
		{
			end = 0;
			continue;
		}
		else if (s1[i] != s2[i])
		{
			x1 = (int)(s1[i]);
			x2 = (int)(s2[i]);
			if (x1 > x2)
			{
				end = 1;
				break;
			}				
			else
			{
				end = -1;
				break;
			}
		}		
	}

	return end;
}








int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0, ""); // Включаем кириллицу
	char s1[] = "";
	char s2[] = "";


	string path = "myFile.txt";

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл успешно открыт!" << endl;

	}


	while (!fin.eof())
	{
		fin >> s1;
		fin >> s2;

		break;
	}

	int test = fun(s1, s2);
	cout << test;
	cout << endl;





	cout << endl;
	system("pause");
	return 0;

	
}

