#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 64
#define DIGITS 6

const char ASCII[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
char *decimal_to_binary(int, int);
int firstChr(char);

int main() {
	int N, M, i, j;
	while (scanf("%d%d", &N, &M) != EOF) {
		for (i = 0; i < N; i++) {
			int len;
			char str[201];
			scanf("%s", str);
			for (j = 0; j < M/DIGITS; j++) {
				int dec = firstChr(str[j]);
				char *ptr = decimal_to_binary(dec, DIGITS);
				printf("%s", ptr);
			}
			printf("\n");
		}
	}
	return 0;
}

char *decimal_to_binary(int n, int digits) {
	int c, d, count;
	char *pointer;

	count = 0;

	pointer = (char*)malloc(digits+1);

	if (pointer == NULL) {
		printf("OUT OF MEMORY!\n");
		exit(EXIT_FAILURE);
	}

	for (c = digits-1; c >= 0; c--) {

		d = n >> c;
		if (d & 1) *(pointer+count) = 1 + '0';
		else *(pointer+count) = 0 + '0';

		count++;
	}
	*(pointer+count) = '\0';

	return pointer;
}

int firstChr(char target) {
	int i;
	for (i = 0; i < SIZE; i++)
		if (ASCII[i] == target)
			return i;
	return -1;
}
