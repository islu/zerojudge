#include <stdio.h>

int main()
{
	int n;
	int p;
	int i, j;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		int count[101] = {0};	
		for (i = 0; i < n; i++) {
			scanf("%d", &p);
			count[p]++;
		}
		for (i = 1; i <= 100; i++) {
			for (j = 0; j < count[i]; j++) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	return 0;
}