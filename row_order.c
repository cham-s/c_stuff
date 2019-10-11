#include <stdio.h>

int main()
{

	int a[2][2][2] = { {{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}  };
	printf("%d ", **(*(a + 1) + 1));
}
