#include <stdio.h>
#include <string.h>

int main() {
	char str[1001];
	int i;
	while (scanf("%s", str) != EOF) {
		int len = strlen(str);
		int a = 0, b = 0, x = 0;
		if (len % 2 == 1) {
			for (i = len - 1; i >=0 ; i--) {
				if (i % 2 == 0) a += str[i]-'0';
				else if (i % 2 == 1) b += str[i]-'0';
			}
		}
		else {
			for (i = len - 1; i >= 0; i--) {
				if (i % 2 == 0) b += str[i]-'0';
				else if (i % 2 == 1) a += str[i]-'0';
			}
		}
		x = a - b;
		if (x < 0) printf("%d\n", x*(-1));
		else printf("%d\n", x);	
	}
	return 0;
}