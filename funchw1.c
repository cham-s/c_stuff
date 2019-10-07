#include <stdio.h>

int func(int );

int main ()
{
	printf("%d\n", func(435));
}

int func(int num)
{
	int count = 2;
	while(num)
	{
		count++;
		num >>= 2;
	}
	return(count);
}
