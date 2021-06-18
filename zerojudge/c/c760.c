#include <stdio.h>

int main() {
	char s[50];
	while (scanf("%s", s)!= EOF) {
		if ('a'<=s[0] && s[0]<='z') s[0] -= 32;
		printf("%s\n", s);
	}
	return 0;
}