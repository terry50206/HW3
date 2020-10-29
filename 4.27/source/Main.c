#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 5; i <= 500; i++)
	{
		for (j = 1; j <= 300; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if ((i * i) == (j * j + k * k))
					printf("%3d^2=%3d^2+%3d^2\n", i, j, k);
			}
		}
	}
	system("pause");
	return 0;
}