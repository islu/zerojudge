#include <math.h>

int Number26ToDecimal(char*);
char* DecimalToNumber26(int);

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
	char covert[20] = {'\0'};
	int i = 0;
	while (number > 0) {
		int m = number%26;
		if (m == 0) {
			m = 26;
		}
		covert[i] = m+'A'-1;
		number = (number-m)/26;
		i++;
	}
	char* reverse = malloc(sizeof(char)*(i+1));
	int c = 0;
	for (i = i-1; i >= 0; i--) {
		reverse[c] = covert[i];
		c++;
	}
	reverse[c] = '\0';
	return reverse;
}
