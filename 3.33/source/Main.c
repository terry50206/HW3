#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i, j;
	char sign = '+';
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if ((i == 0) || (i == 4))
			{
				printf("%c", sign);
			}
			else if ((i == 2) && (j == 0))
			{
				printf("%c", sign);
			}
			else if ((i == 2) && (j == 11))
			{
				printf("%c", sign);
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	return 0;
}