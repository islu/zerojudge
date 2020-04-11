#include <stdio.h>
#include <string.h>

int main() {
	char number[20];
	int i;
	while (scanf("%s", number) != EOF) {
		int len = strlen(number);
		if (number[0]=='-') {
			for (i = len - 1; i > 1; i--) {
				if (number[i]!='0') break;
			}
			if (i==1 && number[i]=='0') printf("0\n");
			else {
				printf("-");
				for (i; i > 0; i--) {
					printf("%c", number[i]);
				}
			}
		}
		else {
			for (i = len - 1; i > 0; i--) {
				if (number[i] != '0') break;
			}
			for (i; i >= 0; i--) {
				printf("%c", number[i]);
			}
		}
		printf("\n");
	}
	return 0;
}