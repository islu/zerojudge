#include <stdio.h>

int main() 
{
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, m;
		int min = 2147483647;
		int max = -1;
		
		for (i = 0; i < n; i++) {
			scanf("%d", &m);
			if (m < min) min = m;
			if (m > max) max = m;
		}

		if (max - min == n - 1 )
			printf("%d %d yes\n", min, max);
		else
			printf("%d %d no\n", min, max);

	}
	return 0;
}
