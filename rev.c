#include <stdio.h>

int array[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};

void	reverse(int );
void	order(int );

int		main()
{
	order(9);
	printf("\n");
	reverse(9);
}

void	order(int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
}

void	reverse(int n)
{
	for (int i = n - 1; i >=  0; i--)
		printf("%d ", array[i]);
}
