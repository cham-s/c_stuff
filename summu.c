#include <stdio.h>

#define SIZE 5


int main()
{
	int result;
	int a[SIZE][SIZE] = {
							{8, 3, 9, 0, 10},
							{3, 5, 17, 2, 1},
							{2, 8, 6, 23, 1},
							{15, 7, 3, 2, 9},
							{6, 14, 2, 6, 0},
						};

	printf("Row total: ");
	for (int i = 0; i < SIZE; i++)
	{
		result = 0;
		for ( int j = 0; j < SIZE; j++)
			result += a[i][j];
		printf("%d ", result);
	}

	printf("\n");

	printf("Column total: ");
	for (int i = 0; i < SIZE; i++)
	{
		result = 0;
		for ( int j = 0; j < SIZE; j++)
			result += a[j][i];
		printf("%d ", result);
	}
	return 0;
}


