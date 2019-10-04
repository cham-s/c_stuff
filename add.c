#include <stdio.h>

int main()
{
	int x;
	int y;

	printf("Enter two numbers\n> ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		if (y < 0)
		{
			x--;
			y++;
		}
		else
		{
			x++;
			y--;
		}
	}

	printf("%d", x);
}
