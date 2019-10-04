#include <stdio.h>

int	main()
{
	int	number;
	int	result = 0;

	printf("Enter a number\n> ");
	scanf("%d", &number);

	for (int q = number; q > 0; q /= 10)
	{
		int remainder = q % 10;
		int factorial = 1;
		for (int i = 1; i <= remainder; i++)
			factorial *= i;
		result += factorial;
	}
	if (result == number)
		printf("YES");
	else
		printf("NO");
}
