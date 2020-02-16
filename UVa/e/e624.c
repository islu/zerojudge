// like substring problem
#include <stdio.h>
#include <string.h>
#define SIZE 2000

int compare(char*, char*);

int main()
{
	char s[SIZE], t[SIZE];
	while (scanf("%s%s", s, t) != EOF)
	{
		int result = compare(s, t);
		if (result == 1) printf("Yes\n");
		else printf("No\n");
		
	}
	
	return 0;
}

int compare(char *s, char *t) {
	int i;
	int sL = strlen(s);
	int tL = strlen(t);
	for (i = 0; i < tL; i++) {
		int index1 = 0;
		int index2 = i;
		while (index2 < tL) {
			if (s[index1] == t[index2]) index1++;
			if (index1 == sL) return 1;
			index2++;
		}
	}
	
	return 0;
}
