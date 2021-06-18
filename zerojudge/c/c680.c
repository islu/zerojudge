#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T;
	while (scanf("%d", &T) != EOF) {
		int i, j, N;
		char *ans = (char*) malloc(sizeof(char) * T + 1);
		scanf("%s", ans);
		scanf("%d", &N);
		for (i = 0; i < N; i++) {
			int len, point, grade;
			char *str = (char*) malloc(sizeof(char) * T * 2 + 1);
			scanf("%s", str);
			len = strlen(str);
			point = 0;
			if (len < T) {
				for (j = 0; j < len; j++) {
					if (str[j] == ans[j]) point++;
				}
			}
			else {
				for (j = 0; j < T; j++) {
					if (str[j] == ans[j]) point++;
				}
			}
			grade = 100 / T * point;
			printf("%d\n", grade);
			free(str);
		}
		free(ans);
	}
	return 0;
}