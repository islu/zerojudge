#include <stdio.h>

int swap(int*, int*);

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) !=EOF) {
		int sum = 0;
		if (a > b) swap(&a, &b);
		for (a; a <= b; a++) {
			if (a % 2 == 0) sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}

int swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}