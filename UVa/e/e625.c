// reverse each word of a string
#include <stdio.h>
#include <string.h>
#define SIZE 2000

void reverse(char*, int, int);

int main()
{
	char str[SIZE];
	while (gets(str) != 0)
	{
		int i;
		int len = strlen(str);
		int start = 0;
		
		for (i = 0; i < len; i++) {
			if (str[i] == ' ') {
				reverse(str, start, i-1);
				start = i+1;
			}
		}
		
		reverse(str, start, len-1);
		printf("%s\n", str);
	}
	
	return 0;
}

void reverse(char *s, int start, int end) {
	while (start <= end) {
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		
		start += 1;
		end -= 1;
	}
}
