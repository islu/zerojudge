#include <stdio.h>
#define LENTH 105

int main() {
	char web_address[10][LENTH];
	int match_rate[10];
	int T;
	int i, j;
	while (scanf("%d", &T) == 1)
  {
		for (i = 1; i <= T; i++) {
			int max = 0;
			for (j = 0; j < 10; j++) {
				scanf("%s", web_address[j]);
				scanf("%d", &match_rate[j]);
				if (max < match_rate[j]) max = match_rate[j];
			}
			printf("Case #%d:\n", i);
			for (j = 0; j < 10; j++) {
				if (max == match_rate[j]) {
					printf("%s\n", web_address[j]);
				}
			}
		}
	}
	return 0;
}
