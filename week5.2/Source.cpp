#include<stdio.h>
int main()
{
	int num, x, y;
	printf("Enter your num :");
	scanf_s("%d", &num);
	for (y = 0; y <= num * 2; y++)
	{
		for (x = 0; x <= num * 2; x++)
		{
			if (y >= -(x - num) && y >= x - num && y <= num)
				printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}