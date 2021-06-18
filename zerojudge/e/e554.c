#include <stdio.h>
#include <string.h>
#define SIZE 50

int check_same(char*, char*, int);

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i;
		char real_name[SIZE], modify_name[SIZE];
		for (i = 0; i < n; i++) {
			scanf("%s", real_name);
			scanf("%s", modify_name);
			
			if (strlen(real_name) == strlen(modify_name)) {
				int len = strlen(real_name);
				int result = check_same(real_name, modify_name, len);
				
				if (result == 1) printf("Yes\n");
				else if (result == 0) printf("No\n");
			
			}
			else printf("No\n");
			
		}
	}
	
	return 0;
}

int check_same(char *s1, char *s2, int len) {
	int i;
	
	for (i = 0; i < len; i++) {
		if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') {
			if (s2[i] != 'a' && s2[i] != 'e' && s2[i] != 'i' && s2[i] != 'o' && s2[i] != 'u')
				return 0;			
		}
		else if (s1[i] != s2[i]) return 0;
	}
	
	return 1;
}
