#include <stdio.h>

int exists(int, int[], int );

int main()
{
	int	n;
	int has_dup = 0;
	printf("Pleanse enter a number\n> ");
	scanf("%d", &n);
	int a[10] = {0};
	for (int q = n ; q != 0; q /= 10)
		if (exists(n, a, 10))
			has_dup = 1;
	if (has_dup)
		printf("YES");
	else
		printf("NO");
}

int exists(int n, int a[], int len)
{
	for (int i = 0; i < len; i++)
	{
		if (n == a[i])
			return 1;
		else
			a[i] = n;
	}
	return 0;
}
