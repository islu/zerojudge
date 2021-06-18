#include <stdio.h>

int main()
{
	int t, n, m;
	int i;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		int ep = 0;
		scanf("%d%d", &n, &m);
		while (n > 1) {
			n = n - m + 1;
			ep++;
		}
		if (ep != 0 && n == 1) printf("%d\n", ep);
		else printf("cannot do this\n");
	}
	return 0;
}