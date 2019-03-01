// Lab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <iomanip>


using namespace std;


int main()
{
	srand(time(NULL));
	const int strok = 9;
	const int stolb = 9;
	int a[strok][stolb] = { 0 };
	cout << "Ishodnaja matrix:" << endl;
	for (int i = 0; i<strok; i++)
	{
		for (int j = 0; j<stolb; j++)
		{
			a[i][j] = 1 + rand() % 9;
			cout << setw(2) << a[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "Trnsponirovannaja matrix:" << endl;
	for (int i = 0; i<stolb; i++)
	{
		for (int j = 0; j<strok; j++)
		{
			cout << setw(2) << a[j][i] << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

