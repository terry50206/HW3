#include <stdio.h>
#include <stdlib.h>

int main() {
	float  rate[5] = {10.0,10.5,11.0,11.5,12.0}, pri=5000;
	int x, i;
	for (x = 0; x < 5; x++)
	{
		for (i = 0; i < 15; i++)
		{
			pri= pri + pri*rate[x] / 100;
		}
		printf("���� $5000 �A�~�Q�v%.1f%%�A�g�L15�~�A�`���B��$%.2f\n", rate[x], pri);
		pri = 5000.00;
	}
	system("pause");
	return 0;
}