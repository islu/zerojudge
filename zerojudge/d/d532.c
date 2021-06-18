#include <stdio.h>

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		int counter = 0;
		for (a; a <= b; a++) {
			if (a%4 == 0 && a%100 != 0) counter += 1;
			else if (a % 400 == 0) counter += 1;
		}
		printf("%d\n", counter);
	}
	return 0;
}