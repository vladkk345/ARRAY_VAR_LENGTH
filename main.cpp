#include <iostream>
#include <stdio.h>
#include <Windows.h>

#define ROWS  3
#define COLS  5

//----------------------------------------------------------------------------
void Source_values(int ar[][5], int rows);
void Double_values(int ar[][5], int rows);
//----------------------------------------------------------------------------

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int mass[ROWS][COLS] = { { 1, 1, 1, 1, 1 },
						     { 2, 2, 2, 2, 2 },
						     { 3, 3, 3, 3, 3 } };

	Source_values(mass, 3);
	Double_values(mass, 3);

	return 0;
}

//----------------------------------------------------------------------------

void Source_values(int ar[][5], int rows)
{
	printf("Исходный массив\n");

	int i, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}

void Double_values(int ar[][5], int rows)
{
	printf("Массив с удвоенными значениями\n");

	int i, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", ar[i][j]*2);
		}
		printf("\n");
	}
}
