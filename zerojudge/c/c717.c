#include <stdio.h>

int main() {
	char str[500];
	gets(str);
	printf("%s %s\n", str, str);
	return 0;
}