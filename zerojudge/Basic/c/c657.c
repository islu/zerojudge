#include <stdio.h>
#include <string.h>

int main() {
	char str[1000];
	while (scanf("%s", str) != EOF) {
		int i, len, max, temp;
		char max_c, c;
		len = strlen(str);
		max = 0;
		temp = 0;
		c = '\0';
		max_c = '\0';

		for (i = 0; i < len; i++) {
			if (c == '\0') {
				c = str[i];
				temp++;
			}
			else if (c == str[i]) temp++;
			else {
				if (max < temp) {
					max = temp;
					max_c = c;
				}
				temp = 1;
				c = str[i];
			}
		}
		if (max < temp) {
			max = temp;
			max_c = c;
		}
		printf("%c %d\n", max_c, max);
	}
	return 0;
}