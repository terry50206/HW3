#include<stdio.h>
#include<stdlib.h>

int main() {
	float doller, a;
	while (1)
	{
		printf("enter sales in dollers(-1 to end):");
		scanf_s("%f", &doller);
		if (doller == -1)
			break;
		a = 200 + (doller*0.09);
		printf("salary is: $%f\n", a);
	}
	system("pause");
	return 0;
}
