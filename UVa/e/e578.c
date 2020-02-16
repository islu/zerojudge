// replace char
#include <stdio.h>
#include <string.h>
#define SIZE 2000

char ORIGIN_TABLE[] = " ertyuiop[]dfghjkl;'cvbnm,./\\234567890-=";
char REPLAE_TABLE[] = " qwertyuiopasdfghjklzxcvbnm,[`1234567890";

int index_is(char*, char);

int main()
{
	char str[SIZE];
	while (gets(str) != 0)
	{	
		int i;
		int len = strlen(str);
		for (i = 0; i < len; i++) {
			int index = index_is(ORIGIN_TABLE, str[i]);
			str[i] = REPLAE_TABLE[index];
		}
		
		printf("%s\n", str);
	}
	
	return 0;
}

int index_is(char *s, char target) {
	int i;
	int len = strlen(s);
	for (i = 0; i < len; i++) {
		if (s[i] == target) return i;
	}
	return -1;
}
