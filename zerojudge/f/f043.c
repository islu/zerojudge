#include <stdio.h>

void swap(int*, int*);

int main() {
	int A, B;
	while (scanf("%d%d", &A, &B) != EOF) {
		int C;
		if (A == B) {
			C = A - 3;
			B -= C;
		}
		else C = A - B;
		
		if (C > B) swap(&C,&B);
		printf("%d+%d=%d\n", C, B, A);
	}
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
