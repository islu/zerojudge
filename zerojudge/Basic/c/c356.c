#include <stdio.h>
#include <string.h>
#define SIZE 5050

char code[SIZE];

int main() {
	int N;
	int i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			scanf(" %c", &code[j]);

		printf("%c", code[i]);
	}
	return 0;
}