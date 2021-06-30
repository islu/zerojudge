#include <stdio.h>

int func(int);

int main() {
	int n;
	while(scanf("%d", &n) == 1) 
	{
		int count = func(n);
		printf("%d\n", count);	
	}
	return 0;
}

int func(int n)
{
	int count = 0;
	while(1) 
	{
		if (n == 1)
			return count;
		else if(n % 2 == 0) 
		{
			n /= 2;
			count++;
		}
		else
		{
			n = n * 3 + 1;
			count++;
		}
	}
}
