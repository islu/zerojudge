#include <stdio.h>

int main() {
	int A, B, C;
	while (scanf("%d%d%d", &A, &B, &C) != EOF) {
		double scroe = A*0.2 + B*0.3 + C*0.5;
		printf("%d\n", (int)scroe);
	}
	return 0;
}