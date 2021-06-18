#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j, temp;
		int record[10] = {0};
		for (i = 0; i < n; i++) {
			scanf("%d", &temp);
			record[temp]++;
		}

		for (i = 0; i < 10; i++) {
			int max = 0;
			int index = 0;

			for (j = 0; j < 10; j++) {
				if (record[j] > max) {
					max = record[j];
					index = j;
				}
			}
			if (max == 0) break;
			printf("%d ", index);
			record[index] = 0;
		}
		printf("\n");
	}
	return 0;
}