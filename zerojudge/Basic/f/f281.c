#include <stdio.h>

void swap(int*, int*);

int main() {
	int C;
	while (scanf("%d", &C) != EOF) {
		int M, last, last2, i, L;
		last = -1;
		last2 = -1;
		for (i = 0; i < C; i++) {
			scanf("%d", &M);
			if (last2 == -1) {
				last2 = M;
				continue;
			}
			if (last == -1) {
				last = M;
				continue;
			}

			if (last > last2) swap(&last2, &last);

			if (M < last2 && M >= last) last2 = M;
			if (M < last) last = M;
		}
		scanf("%d", &L);

		int ans = last2 - (L - last);
		if (ans >= L) printf("%d\n", L-last);
		else printf("You are too black!\n");	
	}
	
	return 0;
}


void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
