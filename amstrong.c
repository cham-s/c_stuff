#include <stdio.h>

int	main()
{
	int	number;
	int	result = 0;

	printf("Enter a number\n> ");
	scanf("%d", &number);

	// length of digit
	int length = 0;
	for (int q = number; q > 0; q /= 10)
		length += 1;
	for (int q = number; q > 0; q /= 10)
	{
		int remainder = q % 10;
		int subresult = 1;
		for (int i = 0; i < length; i++)
			subresult *= remainder;
		result += subresult;
	}
	if (result == number)
		printf("YES");
	else
		printf("NO");
}
