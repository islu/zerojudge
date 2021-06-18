#include <stdio.h>
#include <string.h>

char s[100000];
int main() {
	int i;
	while (scanf(" %[^\n]", s) != EOF) {
		int v[26] = {0};
		int len = strlen(s);
		int total = 0;
		for (i = 0; i < len; i++) {
			if('a'<=s[i] && s[i]<='z') {
				v[s[i]-'a']++;
				total++;
			}
			else if('A'<=s[i] && s[i]<='Z') {
				v[s[i]-'A']++;
				total++;
			}
		}
		for (i = 0; i < 26; i++) 
			printf("%d ", v[i]);
		printf("\n");
		
		for (i = 0; i < 26; i++) 
			printf("%.2lf ", (v[i]/(double)total)*100);
		printf("\n");
	}
	return 0;
}