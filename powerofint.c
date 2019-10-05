
#include <stdio.h>

int main()
{
	int		number;
	int		power;
	double	result = 1.0;

	printf("Please enter a number and power\n> ");
	scanf("%d %d", &number, &power);

	if (power >= 0)
	{
		for (int i = 1; i <= power ; i++)
			result *= number;
	}
	else
	{
		for (int i = power; i != 0 ; i++)
			result *=  1.0 / number;
	}

	printf("%d to the %d th power is %10f\n", number ,power, result);
}
