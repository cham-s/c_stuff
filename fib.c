#include <stdio.h>

int main()
{
	int n;

	printf("Enter a number\n> ");
	scanf("%d", &n);
	int n1 = 0;
	int n2 = 1;
	int current = 0;

	for (int i = 1; i <= n; i++)
	{
		printf("%d ", n1);
		current = n1 + n2;
		n1 = n2;
		n2 = current;

	}
	return 0;
}
