#include <stdio.h>

int main()
{
	int n;
	while (scanf("%d", &n)!= EOF) 
	{
		int i;
		for (i = 1; i <= n; i++)
			printf("%d. I don't say swear words!\n", i);

	}
	return 0;
}