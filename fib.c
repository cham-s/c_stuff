#include <stdio.h>

int main()
{
	int index;

	printf("Enter a number\n> ");
	scanf("%d", &index);
	int n1 = 0;
	int n2 = 1;
	int current = 0;

	if (index < 2)
		current = index;
	else
	{
		for (int i = 2; i <= index; i++)
		{
			current = n1 + n2;
			n1 = n2;
			n2 = current;

		}
	}
	printf("%d", current);
	return 0;
}
