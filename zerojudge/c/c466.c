#include <stdio.h>
#include <string.h>

int main() {
	char pa[1000100] = {'\0'};
	int i, count = 0;
	scanf("%s", pa);
	int len = strlen(pa);
	for (i = 0; i < len; i++) {
		if (pa[i] != '-') break;
		count++;
	}
	if (pa[i] == '0') printf("0\n");
	else {
		if (count % 2 != 0) printf("-");
		printf("%c\n", pa[i]);
	}
	return 0;
}