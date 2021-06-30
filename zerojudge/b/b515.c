#include <stdio.h>
#include <string.h>

int main() {
	char c[200];
	char table[26][10] = {
		".-", "-...", "-.-.", "-..",
		".", "..-.", "--.", "....",
		"..", ".---", "-.-", ".-..",
		"--", "-.", "---", ".--.",
		"--.-", ".-.", "...", "-",
		"..-", "...-", ".--", "-..-",
		"-.--", "--..",
	};
	int N;
	while (scanf("%d ", &N) != EOF) {
		int len, i, j, k, index;
		char temp[10] = {'\0'};
		for (k = 0 ; k < N; k++) {
			gets(c);	
			len = strlen(c);
			index = 0;
			for (i = 0; i < len; i++) {
				if (c[i] == ' ') {
					for (j = 0; j < 26; j++) {
						if (strcmp(table[j], temp) == 0) {
							printf("%c", j+'A');
							break;
						}
					}
					index = 0;
					temp[index] = '\0';
				}
				else {
					temp[index] = c[i];
					temp[index+1] = '\0';
					index++; 
				}
			}
			for (j = 0; j < 26; j++) {
					if (strcmp(table[j], temp) == 0) {
					printf("%c", j+'A');
					break;
				}
			}
			index = 0;
			temp[index] = '\0';
			printf("\n");
		}
			
	}
	
	return 0;
}
