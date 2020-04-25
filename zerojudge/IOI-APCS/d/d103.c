#include <stdio.h>
#include <string.h>

int main() {
	char str[20];
	int i;
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		char removed[20]={'\0'};
		int j = 0;
		for (i = 0; i < len - 1; i++) {
			if (str[i] != '-') {
				removed[j] = str[i];
				j++;
			}
		}
		j = 0;
		for (i = 0; i < 9; i++) {
			j += (removed[i]-'0') * (i+1); 
		}
		j %= 11;
		if (j == 10) removed[9] = 'X';
		else removed[9] = j + '0';
		
		if (removed[9] == str[len-1]) printf("Right\n");
		else {
			for (i = 0; i < len - 1; i++) {
				printf("%c", str[i]);
			}
			printf("%c\n", removed[9]);
		}
	}
	return 0;
}