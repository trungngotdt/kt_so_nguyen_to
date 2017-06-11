// kt_so_nguyen_to.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <math.h>
int ktsnt(int hp)
{
	if (hp < 2)
		return 0;
	else if (hp==2)
	{
		return 1;
	}
	for (int i = 2; i < hp; i++)
	{
		if ((hp) % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a;
	printf_s("nhap a:");
	scanf_s("%d", &a);
	int c = 0;
	while (c < a)
	{
		c = c + 1;
		a = a - 1;
		if (ktsnt(a)==1)
		{
			printf_s("la %d\n", a);
		}
	}
	_getch();
	return main();
}

for