#include <stdio.h>
#define SIZE 5

int main() {
	int a, b, c, i;
	while (scanf("%d%d%d", &a, &b, &c) != EOF) {
		int A[SIZE], B[SIZE];
		int bonus = 0, doubleBonus = 1;
		for (i = 0; i < SIZE; i++) {
			scanf("%d", &A[i]);
		}
		for (i = 0; i < SIZE; i++) {
			scanf("%d", &B[i]);
		}
		for (i = 0; i < SIZE; i++) {
			if (a == A[i]) bonus += B[i];
			if (b == A[i]) bonus += B[i];
		}
		for (i = 0; i < SIZE; i++) {
			if (c == A[i]) {
				bonus -= B[i];
				doubleBonus = 0;
			}
			if (bonus < 0) bonus = 0;
		}
		
		if (doubleBonus) bonus *= 2;
		printf("%d\n", bonus);
		
	}
	
	return 0;
}