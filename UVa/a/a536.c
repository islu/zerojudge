#include <stdio.h>

int main()
{
	int n;
	int i;
	int e, f, c;
	int total;
	while (scanf("%d", &n) == 1)
  {
		for (i = 0; i < n; i++) {
			scanf("%d%d%d", &e, &f, &c);
			int soda = 0;
			total = e + f;
			while (total / c) {
				soda += total / c;
				total = total/c + total%c;
			}
			printf("%d\n", soda);
		}
	}
	return 0;
}
