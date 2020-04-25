// reverse each word of a string
#include <stdio.h>
#include <string.h>
#define SIZE 200

void reverse(char*, int, int);

int main()
{
	int G;
	while (scanf("%d", &G) != EOF && G != 0)
	{
		int i;
		char s[SIZE];
		scanf("%s", s);
		int len = strlen(s);
		int nG = len/G;
		for (i = 0; i < len; i+=nG) reverse(s, i, i+nG-1);
		
		printf("%s\n", s);
		
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
