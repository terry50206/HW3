#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		printf("*");
		printf("");
	}
	puts(" ");
	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		printf("*");
		puts("");
	}
	puts(" ");
	for (i = 1; i <= 10; i++)
	{
		for (j = 2; j <= i; j++)
			printf(" ");
		for (k = 10; k >= i; k--)
			printf("*");
		puts(" ");
	}
	puts("");
	for (i = 10; i >= 1; i--)
	{
		for (j = 2; j <= i; j++)
			printf(" ");
		for (k = 10; k >= i; k--)
			printf("*");
		puts(" ");
	}
	system("pause");
	return 0;
}