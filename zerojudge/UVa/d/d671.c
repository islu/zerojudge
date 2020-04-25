#include <stdio.h>
#include <string.h>
#include <math.h>
#define SIZE 10001
#define R 101

int main()
{
	int T;
	int i, j, k;
	int len;
	char code[SIZE];
	int store[R];
	for (i = 1; i < R; i++)
		store[i] = i * i;

	while (scanf("%d", &T) == 1)
	{
		for (i = 0; i < T; i++) {
			int fail = 1;
			int sq = 0;
			scanf(" %[ A-Z]", code);
			len = strlen(code);
			for (j = 1; j < R; j++) {
				if (len == store[j]) {
					fail = 0;
					sq = (int)(sqrt((double)store[j]));
					break;
				}
			}
			if (fail) printf("INVALID\n");
			else {
				for (j = 0; j < sq; j++) {
					for (k = j; k < len; k+=sq) {
						printf("%c", code[k]);
					}
				}
				printf("\n");
			}
		}
	}
	return 0;
}