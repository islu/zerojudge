#include <stdio.h>
#include <string.h>

int main() {
	char num[50];
	int rev[50];
	int N;
	int i, j;

	while (scanf("%d", &N) == 1)
	{
		for (i = 0; i < N; i++) {
			int flag = 1;
			int times = 0;
			
			scanf("%s", num);	
			
			while (flag != 0) {
				int len = strlen(num);
				for (j = 0; j <= len/2; j++) {
					if (num[j] != num[len-1-j]) {
						flag = 1;
						break;
					}
					else flag = 0;
				}
				if (flag == 1) {
					times++;
					for (j = 0; j < len; j++) {
						rev[j] = num[len-1-j]-'0';
					}
					for (j = 0; j < len; j++) {
						num[j] += rev[j];
					}
					for (j = len-1; j > 0; j--) {
						if (num[j] > '9') {
							num[j] -= 10;
							num[j-1]++;
						}
					}
					if (num[0] > '9') {
						num[0] -= 10;
						for (j = len; j>0; j--) {
							num[j] = num[j-1];
						}
						num[0] = '1';
						num[len+1] = '\0';
					}
				}
				else if (times == 0 && flag == 0) {
					times++;
					for (j = 0; j < len; j++) {
						rev[j] = num[len-1-j]-'0';
					}
					for (j = 0; j < len; j++) {
						num[j] += rev[j];
					}
					for (j = len-1; j>0; j--) {
						if (num[j] > '9') {
							num[j] -= 10;
							num[j-1]++;
						}
					}
					if (num[0] > '9') {
						num[0] -= 10;
						for (j = len; j>0; j--) {
							num[j] = num[j-1];
						}
						num[0] = '1';
						num[len+1] = '\0';
					}
					flag = 1;
				}
			}
			
			printf("%d %s\n", times, num);

		}
	}
	return 0;
}
