#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int acc;
	float bal, cha, cre, lim, a;

	while (1)
	{
		printf("enter account number(-1 to end):");
		scanf_s("%d", &acc);
		if (acc != -1)
		{
			printf("enter begining balance:");
			scanf_s("%f", &bal);
			printf("enter total charges:");
			scanf_s("%f", &cha);
			printf("enter total credits:");
			scanf_s("%f", &cre);
			printf("enter credit limit:");
			scanf_s("%f", &lim);
			a = bal + cha - cre;
		}
		else
		{
			break;
		}
		if (a > lim)
		{
			printf("account:	%d\n", acc);
			printf("credit limit:	%.3f\n", lim);
			printf("balance:	%.3f\n", bal);
			printf("credit limit exceeded\n");
			break;
		}

	}

	return 0;
}