#include <stdio.h>
 
// https://gist.github.com/cham-s/bbf48c5eb55d7ed072561ea3fc15aa3a

int	main()
{
	int column;
	int row;

	printf("Please input column and row\n");
	printf("column> ");
	scanf("%d", &column);
	printf("row> ");
	scanf("%d", &row);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= column; j++)
		{
			if ( (i == 1 && j == 1) || (i == row && j == 1) ||
				   	(i == 1 && j == column) || (i == row && j == column))
				printf("o");
			else if (i == 1 || i == row)
				printf("-");
			else if (j == 1 || j == column)
				printf("|");
			else
				printf(" ");
		}
		printf("\n");
	}
}
