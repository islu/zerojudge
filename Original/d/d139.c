#include <stdio.h>
#include <string.h>
	
int main() {
	char str[1001];
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		int i;
		int counter = 0;
		for (i = 0; i < len; i++) {
			counter = 1;
			while ((i+1)<len && str[i]==str[i+1]) {
				counter++;
				i++;
			}
			if (counter > 2) printf("%d%c", counter, str[i]);
			else if(counter == 2) printf("%c%c", str[i], str[i]);
			else printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}