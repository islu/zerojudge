#include <stdio.h>

int count_circle(int);

int main() {
	long long N;
	while (scanf("%lld", &N) != EOF) {
		int F = 0;
		if (N == 0) F++;
		while(N) {
			F += count_circle(N % 10);
			N /= 10;
		}
		printf("%d\n", F);
	}
	return 0;
}

int count_circle(int n) {
	switch(n) {
		case 0: case 6: case 9:
			return 1;
			break;
		case 8:
			return 2;
			break;
		case 1: case 2: case 3:
		case 4: case 5: case 7:
			return 0;
			break;
	}
}