#include <stdio.h>
#include <string.h>
#define SIZE 200

struct Word {
	char ori[SIZE];
	char rep[SIZE];
};

void pluralize(char*, struct Word*, int); 

int main()
{
	int L, N;
	while (scanf("%d%d", &L, &N) != EOF)
	{
		int i;
		struct Word w[L];
		char s[SIZE];
		for (i = 0; i < L; i++) scanf("%s%s", w[i].ori, w[i].rep);
			
		for (i = 0; i < N; i++)
		{
			scanf("%s", s);
			pluralize(s, w, L);
			printf("%s\n", s);
		}	
	}
	
	return 0;
}

void pluralize(char *s, struct Word *w, int L) {
	int i;
	int len = strlen(s);
	
	for (i = 0; i < L; i++) {
		if (strcmp(s, w[i].ori) == 0) {
			strcpy(s, w[i].rep);
			return;
		}
	}
	
	if (len >= 2 && s[len-2] != 'a' && s[len-2] != 'e' && s[len-2] != 'i' && s[len-2] != 'o' && s[len-2] != 'u' && s[len-1] == 'y') { 
		s[len-1] = 'i'; 
		s[len] = 'e'; 
		s[len+1] = 's';
		s[len+2] = '\0';
	}
	else if (s[len-1] == 'o' || s[len-1] == 's' || s[len-1] == 'x') {
		s[len] = 'e';
		s[len+1] = 's';
		s[len+2] = '\0';
	}
	else if (len >= 2 && s[len-2] == 'c' && s[len-1] == 'h') {
		s[len] = 'e';
		s[len+1] = 's';
		s[len+2] = '\0';
	}
	else if (len >= 2 && s[len-2] == 's' && s[len-1] == 'h') {
		s[len] = 'e';
		s[len+1] = 's'; 
		s[len+2] = '\0';
	}
	else {
		s[len] ='s';
		s[len+1] = '\0';
	}
}