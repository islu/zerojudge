#include <stdio.h>
#include <stdlib.h>
int *p;

int main() {
	int n;
	int i, j;
	while (scanf("%d", &n) != EOF) {
		p = (int*)malloc(n*sizeof(int));	
		for (i = 0; i < n; i++)
			scanf("%d", &p[i]);

		int count[4] = {0};
		for (i = 0; i < n; i++)
			count[p[i]]++;

		for (i = 1; i <= 3; i++)
			for(j = 0; j < count[i]; j++)
				printf("%d ", i);

		printf("\n");
		free(p);
	}
	return 0;
}