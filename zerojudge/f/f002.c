#include <stdio.h>
#include <string.h>
#include <math.h>

int Number26ToDecimal(char*);
char* DecimalToNumber26(int);

char number[1001];

int main() {
	int N;
	while (scanf("%d ", &N) != EOF) {
		int i, j;
		for (i = 0; i < N; i++) {
			gets(number);
			if ('A' <= number[0] && number[0] <= 'Z') {
				int result = Number26ToDecimal(number);
				printf("%d\n", result);
			} else {
				int number2;
				sscanf(number, "%d", &number2);
				char* result = DecimalToNumber26(number2);
				printf("%s\n", result);
			}
		}
	}
	return 0;
}

int Number26ToDecimal(char *number) {
	int result = 0;
	int i;
	int len = strlen(number);
	for (i = len-1; i >= 0; i--) {
		result += (number[i]-'A'+1) * (int)(pow(26.0, len-i-1));
	}
	return result;
}

char* DecimalToNumber26(int number) {
	char result[20] = {'\0'};
	int i = 0;
	while (number > 0) {
		int m = number%26;
		if (m == 0) {
			m = 26;
		}
		result[i] = m+'A'-1;
		number = (number-m)/26;
		i++;
	}

	char* reverse = malloc(sizeof(char)*(i+1));
	int c = 0;
	for (i = i-1; i >= 0; i--) {
		reverse[c] = result[i];
		c++;
	}
	reverse[c] = '\0';
	return reverse;
}
