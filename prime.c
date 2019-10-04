#include <math.h>
#include <stdio.h>

int main()
{
	int	number;
	int	sqr_num;
	int is_not_prime = 0;

	printf("Enter a number\n> ");
	scanf("%d", &number);

	sqr_num = ceil(sqrt(number));
	for (int i = 2 ; i <= sqr_num; i++)
	{
		if (number % i == 0)
		{
			is_not_prime = 1;
			break;
		}
	}
	if ((is_not_prime == 0 && sqr_num != 1 ) || number == 2 || number == 3)
		printf("The number %d number is prime", number);
	else
		printf("The number %d number is not prime", number);
}
