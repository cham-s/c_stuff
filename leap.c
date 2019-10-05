#include <stdio.h>

int main()
{
	int	year;
	int	is_leap = 0;

	printf("Please enter a year to check if leap or not\n> ");
	scanf("%d", &year);

	if (year % 400 == 0)
		is_leap = 1;
	else if (year % 100 == 0);
	else if (year % 4 == 0)
		is_leap = 1;

	if (is_leap)
		printf("The year %d is a leap year\n", year);
	else
		printf("The year %d is not a leap year\n", year);

}
