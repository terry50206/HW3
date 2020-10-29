#include<stdio.h>
#include<stdlib.h>

int main()
{
	int principal, day;
	float rate, a;
	while (1)
	{
		printf("enter loan principal(-1 to end):");
		scanf_s("%d", &principal);
		if (principal == -1)
			break;
		printf("enter interest rate:");
		scanf_s("%f", &rate);
		printf("enter term of the loan in day:");
		scanf_s("%d", &day);
		a = principal * rate*day / 365;
		printf("the interest charges is: $%.3f\n", a);
	}
	system("pause");
	return 0;
}