#include <stdio.h>

int main()
{
	int n1, n2;
	int i;
	int max = 0;
	while (scanf("%d%d", &n1, &n2) != EOF)
	{
		for (i = 1; i<=n1 && i<=n2; i++) {
			if ((n1%i)==0 && (n2%i)==0) max= i;
		}
		printf("%d\n", max);
	}
	return 0;
}