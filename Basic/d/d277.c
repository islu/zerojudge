#include <stdio.h>
int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		printf("%d\n", N%2 ? N-1 : N);
	}
	return 0;
}