#include <stdio.h>

int main() {
	int n;
	int i;
	int A[101];
	int top;
	int bottom;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++)
			scanf("%d", &A[i]);

		top = n-1;
		bottom = 0;
		
		while (bottom>=0 && top>=0) {
			for (i = bottom; i <= top; i++)
				printf("%d ", A[i]);	
			printf("\n");
			
			bottom++;
			
			for (i = top; i >= bottom; i--)
				printf("%d ", A[i]);
			printf("\n");
			
			top--;
		}
		printf("\n");
	}
	return 0;
}