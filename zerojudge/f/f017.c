#include <stdio.h>
#include <string.h>

int main() {
	char word[36];
	while (scanf("%s", &word) != EOF) {
		int i;
		int len = strlen(word);
		for (i = 0; i < len; i++) {
			printf("%c", word[i]);
			if (i != len - 1) {
				printf("-");
			}
		}
		printf("\n");
	}
	return 0;
}
