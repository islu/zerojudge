// factorization
#include <stdio.h>

int main()
{
	int n;
	printf("PERFECTION OUTPUT\n");
	while (scanf("%d", &n) != EOF && n != 0)
	{
		int i;
		int sum = 0;
		for (i = 1; i < n; i++) {
			if (n % i == 0) sum += i;
		}
		
		printf("%5d  ", n);
		if (n == sum) printf("PERFECT\n");
		else if (n < sum) printf("ABUNDANT\n");
		else if (n > sum) printf("DEFICIENT\n");
		
	}
	printf("END OF OUTPUT\n");
	return 0;
}
