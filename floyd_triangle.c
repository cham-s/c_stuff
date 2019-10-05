#include <stdio.h>

int main()
{
	int	n;
	int	number = 1;

	printf("Please enter a row size\n> ");
	scanf("%d", &n);

	for (int row = 1; row <= n; row++)
	{
		for (int i = 1; i <= row; i++)
		{
			printf("%d ", number);
			number += 1;
		}
		printf("\n");
	}
	return 0;
}
