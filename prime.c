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
	printf("%d\n", sqr_num);
	for (int i = 2 ; i <= sqr_num; i++)
	{
		if (number % i == 0)
		{
			is_not_prime = 1;
			break;
		}
	}
	printf("The number %d number is%s prime", number, is_not_prime ? " not": "");
}
