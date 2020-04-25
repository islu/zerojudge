#include <stdio.h>

int main() {
	int H, M, S;
	while (scanf("%d%d%d", &H, &M, &S) != EOF) {
		int result = H * S;
		printf("%d %d %d. ", H, M, S);
		if (result >= M) printf("I will make it!\n");
		else printf("I will be late!\n");
	}
	return 0;
}
