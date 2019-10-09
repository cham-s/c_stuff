#include <stdio.h>

#define MAX 	50
#define TRUE	1

void	insert_size(char *, char *, int *);
void	insert_elements(int [MAX][MAX], int, int, char *);
void	print_matrix(int [MAX][MAX], int, int, char *);
int		valid_matrices(int, int);

int		main()
{
	int row_a, row_b, col_a, col_b;
	int a[MAX][MAX] = {0}, b[MAX][MAX] = {0}, c[MAX][MAX] = {0};

	while(TRUE)
	{
		insert_size("row", "A",  &row_a);
		insert_size("col", "A",  &col_a);
		insert_size("row", "B",  &row_b);
		insert_size("col", "B",  &col_b);
		if (valid_matrices(col_a, row_b))
			break;
		printf("Size of col a must be equal to size of row b.\n");
	}
	insert_elements(a, row_a, col_a, "A");
	insert_elements(b, row_b, col_b, "B");

	print_matrix(a, row_a, col_a, "A");
	print_matrix(b, row_b, col_b, "B");
}

void	insert_size(char *s, char *name, int *size)
{
	printf("Please enter number of %s for matrix %s:\n> ", s, name);
	scanf("%d", size);
}

void	insert_elements(int matrix[MAX][MAX], int row, int col, char *name)
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("Insert for row: %d col: %d of matrix %s\n> ", i, j, name);
			scanf("%d", &matrix[i][j]);
			print_matrix(matrix, row, col, name);
		}
	}
}

void	print_matrix(int matrix[MAX][MAX], int row, int col, char *name)
{
	printf("\nCurrent matrix %s (uninitialized marked as 0):\n\n", name);
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int		valid_matrices(int col_a, int row_b)
{
	return col_a == row_b;
}
