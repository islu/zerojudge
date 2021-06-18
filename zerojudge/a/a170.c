#include <stdio.h>
#include <ctype.h>

int main() {
	int N;
	int i;
	int o1, o2;
	char str[1000];
	int counter = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%o%o", &o1, &o2);
		sprintf(str, "%x", o1+o2);
		while (str[counter] != '\0') {
			str[counter] = toupper(str[counter]);
			counter++;
		}		
		printf("%s\n", str);
		counter = 0;
	}
	return 0;
}