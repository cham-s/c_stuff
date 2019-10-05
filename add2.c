#include <stdio.h>

int main()
{
	int x;
	int y;
	int	sum;
	int	carry;

	printf("Enter two numbers\n> ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		sum = x^y;
		carry = (x&y) << 1;
		x = sum;
		y = carry;
	}

	printf("%d", x);
}
