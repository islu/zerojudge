#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j, k, cpu[5], player[5], count;
		for (i = 0; i < n; i++) {
			scanf("%d ,%d ,%d ,%d ,%d", &cpu[0], &cpu[1], &cpu[2], &cpu[3], &cpu[4]);
			scanf("%d ,%d ,%d ,%d ,%d", &player[0], &player[1], &player[2], &player[3], &player[4]);
			count = 0;
			for (j = 0; j < 5; j++) {
				for (k = 0; k < 5; k++) {
					if (player[k] == -1)
						continue;
					if (cpu[j] == player[k]) {
						count++;
						player[k] = -1;
					}
				}
			}
			printf("%d\n", count);
		}
	}
	return 0;
}
