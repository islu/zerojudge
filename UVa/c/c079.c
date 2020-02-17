#include <stdio.h>

int peter_smokes(int, int);

int main()
{
	int n, k;
	while (scanf("%d%d", &n, &k) != EOF)
	{
		printf("%d\n", peter_smokes(n, k));
	}
	return 0;
}

int peter_smokes(int n, int k) {
	int count = 0;
	count += n;
	do {
		count += n / k;
		n = n/k + n%k;
	} while (n >= k);
	return count;
}