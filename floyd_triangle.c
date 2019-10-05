#include <stdio.h>

/*
 The program prints the Floyd's triangle
 for a given row size.
 */

int main()
{
	int	size;
	int	number = 1;

	printf("Please enter a row size\n> ");
	scanf("%d", &size);
	printf("\n");

	for (int row = 1; row <= size; row++)
	{
		for (int i = 1; i <= row; i++)
		{
			printf("%d ", number);
			number += 1;
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}

