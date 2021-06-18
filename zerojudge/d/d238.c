#include <stdio.h>
#define SIZE 350
#define TIMES 1000

int main() {
	int n[SIZE] = {0};
	int i, j;
	int sum = 0;
	n[0] = 1;
	for (i = 0; i < TIMES; i++) {
		for (j = 0; j < SIZE; j++) {
			n[j] *= 2;
		}
		for (j = 0; j < SIZE; j++) {
			if (n[j] >= 10) {
				n[j+1] += n[j]/10;
				n[j] %= 10;
			}
		}
	}
	for (i = 0; i < SIZE; i++) {
		sum += n[i];
	}
	printf("%d\n", sum);
	sum = 0;
	return 0;
}