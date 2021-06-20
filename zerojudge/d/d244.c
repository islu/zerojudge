#include <stdio.h>

int stones[1000000][2] = {0};

int main() {
	int stone;
	int n = 0;
	int i;
	while (scanf("%d", &stone) != EOF) {
		int isExist = 0;
		for (i = 0; i < n; i++) {
			if (stones[i][0] == stone) {
				stones[i][1] += 1;
				isExist = 1;
				break;
			}
		}
		if (isExist == 0) {
			stones[n][0] = stone;
			stones[n][1] += 1;
			n += 1;
		}
	}
	for (i = 0; i < n; i++) {
		if (stones[i][1] % 3 != 0) {
			printf("%d\n", stones[i][0]);
			break;
		}
	}
	return 0;
}
