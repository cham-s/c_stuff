int f(int );

int main()
{
	f(3);
}

int f(int n)
{
	static int i = 3;
	int k;
	if (i == n)
	{
		k = f(i);
		return (0);
	}
	else return 0;
}
