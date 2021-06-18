#include <stdio.h>
#define NUMBER 1001
#define SIZE 400

int day[NUMBER][SIZE] = {0};
int rice[SIZE] = {0};

int main() {
	int N;
	int i, j;
	rice[0] = 1;
	day[1][0] = 1;
	for (i = 2; i < NUMBER; i++) {
		for (j = 0; j < SIZE; j++) {
			rice[j] *= 2;
		}
		for (j = 0; j < SIZE; j++) {
			day[i][j] += rice[j] + day[i-1][j];
		}
		for (j = 0; j < SIZE; j++) {
			if (day[i][j] >= 10) {
				day[i][j+1] += day[i][j] / 10;
				day[i][j] %= 10;
			}
			if(rice[j] >= 10) {
				rice[j+1] += rice[j] / 10;
				rice[j] %= 10;
			}
		}
	}
	while (scanf("%d", &N) != EOF) {
		for (i = SIZE-1; day[N][i] == 0; i--);
		for (; i >=0 ; i--) {
			printf("%d", day[N][i]);
		}
		printf("\n");
	}
	return 0;
}