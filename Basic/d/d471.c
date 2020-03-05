#include <stdio.h>
#include <math.h>
#define SIZE 32768
#define NUMBER 15

int store[SIZE][NUMBER]={0};

int main() {
	int bits[NUMBER]={0};	
	int i, j;
	for (i = 1; i < SIZE; i++) {
		bits[0]++;
		for (j = 0; j < NUMBER; j++) {
			if (bits[j] >= 2) {
				bits[j+1] += bits[j]/2;
				bits[j] = bits[j]%2;
			}
		}
		for (j = 0; j < NUMBER; j++)
			store[i][j] = bits[j];
	}
	int n;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < pow(2,n); i++) {
			for (j = n-1; j >= 0; j--)
				printf("%d", store[i][j]);
			printf("\n");
		}
	}
	return 0;
}