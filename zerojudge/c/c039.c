#include <stdio.h>

int func(int, int);

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		printf("%d %d %d\n", n, m, func(n,m));
	}
	return 0;
}

int func(int n, int m) {
	int i, j;
	int hold = 0;
	int count = 1;
	int max = 0;
	if (n > m) {
		hold = n;
		n = m;
		m = hold;
	}
	for (i = n; i <= m; i++) {
		j = i;
		while (j != 1) {
			count++;
			if (j%2 != 0) j = 3*j + 1;
			else j /= 2;
		}
		if (count > max) max = count;
		count = 1;
	}
	return max;
}