#include <stdio.h>

int main() {
	int x, y, z;
	while (scanf("%d%d%d", &x, &y, &z) != EOF) {
		int i;
		int sum[8];
		int max = -1;
		sum[0] = x + 10 * y + z;
		sum[1] = 10 * x + y + z;
		sum[2] = x * (10 * y + z);
		sum[3] = (10 * x + y ) * z;
		sum[4] = x + y + z;
		sum[5] = x + y * z;
		sum[6] = x * y + z;
		sum[7] = x * y * z;
		for (i = 0; i < 8; i++) {
			if (max < sum[i])
				max = sum[i];
		}
		printf("%d\n", max);
	}
	return 0;
}