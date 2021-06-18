#include <stdio.h>
#define SIZE 1000

void swap(int*, int*);

int main()
{
	int n;
	int i, j;
	int x[SIZE];
	int y[SIZE];
	while (scanf("%d", &n) == 1)
	{
		for (i = 0; i < n; i++) {
			scanf("%d", &x[i]);
			scanf("%d", &y[i]);
		}
		
		for (i = 0; i < n-1; i++) {
			for (j = 0; j < n-1-i; j++) {
				if (x[j] > x[j+1]) {
					swap(&x[j], &x[j+1]);
					swap(&y[j], &y[j+1]);
				}
				else if (x[j]==x[j+1] && y[j]>y[j+1]) swap(&y[j], &y[j+1]);
			}
		}
		
		for (i = 0; i < n; i++)
			printf("%d %d\n", x[i], y[i]);
		
	}
}

void swap(int* a, int* b) {
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}