#include <stdio.h>

void	fun2(int );
void	fun3(int );

int		main()
{
	fun3(4);
	return 0;
}

void	fun2(int n)
{
	if (n == 0)
		return;

	fun2(n / 2);
	printf("%d", n % 2);
}

void	fun3(int n)
{
	if (n <= 0)
		return;
	printf("%d ", n);
	fun3(2 * n);
	printf("%d ", n);
}
