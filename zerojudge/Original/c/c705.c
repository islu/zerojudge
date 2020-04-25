#include <stdio.h>
#include <math.h>

int main() {
	unsigned int n;
	while (scanf("%u", &n) != EOF) {
		int IPv4[4] = {0};
		char int32[33] = {'\0'};
		int c, d, count, i, j;
		count = 0;
		for (c = 32-1; c >= 0; c--) {
			d = n >> c;
			if (d & 1) int32[count] = 1 + '0';
			else int32[count] = 0 + '0';
			count++;
		}
		for (i = 0; i < 4; i++) {
			count = 0;
			for (j = 31-i*8; count < 8 ; j--) {		
				IPv4[i] += (int32[j] - '0') * ((int)pow(2,count));
				count++;
			}
		}
		printf("%d.%d.%d.%d\n", IPv4[3], IPv4[2], IPv4[1], IPv4[0]);
	}
	return 0;
}