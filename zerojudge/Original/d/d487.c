#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) == 1) {
		int sum = 1;
		if (n == 0) printf("0! = 1 = 1\n");
		else {
			printf("%d! = ", n);
			do {
				printf("%d ", n);
				if (n > 1) printf("* ");
				sum *= n;
				n--;
			} while (n > 0);
			printf("= %d\n", sum);
		}
	}
	return 0;
}