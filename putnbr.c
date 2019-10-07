#include <unistd.h>

void	putnbr(int n);

int		main()
{
	putnbr(-2147483648);
}

void	putnbr(int n)
{
	char	c;
	if (n < 0)
	{
		write(1, "-", 1);
		if (n == -2147483648)
		{
			n = 147483648;
			write(1, "2", 1);
		}
		else
			n = -n;
	}
	if (n < 10)
	{
		c = '0' + n;
		write(1, &c, 1);
	}
	else
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
}
