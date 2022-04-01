#include <stdio.h>

void reverse(char*, int, int);
int iabs(int, int);

void reverse(char *s, int start, int end) {
	while (start <= end) {
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		
		start += 1;
		end -= 1;
	}
}

int iabs(int a, int b) {
	int result = a - b;
	if (result < 0) return result*(-1);
	else return result;
}
