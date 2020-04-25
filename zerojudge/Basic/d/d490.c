#include <stdio.h>

int main() {
	int a, b;
	while(scanf("%d%d", &a, &b) != EOF) {
		int sum = 0;		
		for (a; a <= b; a++) {
			if (a % 2 == 0) sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}