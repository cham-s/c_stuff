#include <stdio.h>

int main()
{
	int	binary;
	int	decimal = 0;
	int	remainder;
	int	places = 1;

	printf("Please enter a binary number\n> ");
	scanf("%d", &binary);

	for (int q = binary; q != 0 ; q /= 10 )
	{
		remainder = q % 10;
		decimal += places * remainder;
		places *= 2;
	}

	printf("binary %d is %d in decimal\n", binary ,decimal);

}
