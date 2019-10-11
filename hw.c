#include <stdio.h>

int main()
{
	int i = 1, *p = &i, *q;
	q = p;
	*q = 5;
	printf("%d", *p);
}
