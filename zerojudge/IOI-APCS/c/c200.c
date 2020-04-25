#include <stdio.h>
#include <string.h>
#define MAX 105
#define LyNum 1688 

int isChe(char);
int toNum(char);

int main() {
	int T, i, j, len, count, dp[105];
	long long n;
	char car_number[MAX];

	dp[0] = 1;
	for (i = 1; i < 105; i++)
		dp[i] = (dp[i-1] * 36) % LyNum;

	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%s", car_number);
			len = strlen(car_number);
			count = 0;
			n = 0;

			for (j = len-1; j >= 0; j--) {
				int temp;
				if (isChe(car_number[j])) temp = toNum(car_number[j]);
				else temp = car_number[j]-'0';
				
				n += temp * dp[count];
				n %= LyNum;
				count++;
			}
			if (car_number == 0) printf("1\n");
			else printf("%d\n", n+1);
		}
	}
	return 0;
}

int isChe(char c) {
	if ('A' <= c && c <= 'Z') return 1;
	else return 0;
}

int toNum(char c) {
	return c-'A'+10;
}