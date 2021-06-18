#include <stdio.h>

void swap(int*, int*);

int main() {
	int N; 
	while (scanf("%d", &N) != EOF) {
		int Ci[N], E, Q;
		int i, j;
		for (int i = 0; i < N; i++)
			scanf("%d", &Ci[i]);
		
		scanf("%d%d", &E, &Q);
		for (i = 0; i < Q; i++) {
			int C;
			scanf("%d", &C);
			for (j = 0; j < N; j++) {
				if (C == Ci[j]) swap(&E, &Ci[j]);
			}
		}
		
		for (i = 0; i < N; i++)
			printf("%d ", Ci[i]);
		printf("\n");
		
	}
	
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}