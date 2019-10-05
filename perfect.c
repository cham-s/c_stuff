#include <stdio.h>

int main()
{
	int	n;
	int	result = 1;

	printf("Please enter a number to check if perfect or not\n> ");
	scanf("%d", &n);

	for (int i = 2; i < n; i++ )
	{
		if (n % i == 0)
			result += i;
	}

	if (result == n)
		printf("%d is a perfect number.\n", n);
	else
		printf("%d is not a perfect number.\n", n);
}
