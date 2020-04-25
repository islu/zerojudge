#include <stdio.h>

int sod(int);

int main()
{
	int n;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		printf("%d\n", sod(n));
	}
	return 0;
}

int sod(int n)
{
	while (n >= 10)
	{
		int temp = 0;
		while (n)
		{
			temp += n % 10;
			n /= 10;
		}
		n = temp;
	}
	return n;
}