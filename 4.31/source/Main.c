#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	int d[10] = { 4,3,2,1,0,1,2,3,4 };
	int h[10] = { 1,3,5,7,9,7,5,3,1 };
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= d[i]; j++)
			printf(" ");
		for (k = 0; k <= (h[i] - 1); k++)
			printf("*");
		puts("");
	}
	system("pause");
	return 0;
}