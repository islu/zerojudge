#include <stdio.h>

int main()
{
	int T;
	int i;
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		int a, b;
		int n = 0;
		int j = 1;	
		scanf("%d%d", &a, &b);
		
		while (1) {
			if (j*j > b) break;
			if (j*j < a) {
				j++;
				continue;
			}
			n += j*j;
			j++;
		}
		printf("Case %d: %d\n", i, n);
	}
	return 0;
}