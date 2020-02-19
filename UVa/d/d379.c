#include <stdio.h>
#include <stdlib.h>

char *decimal_to_binary(int);

int main()
{
	int N, i;
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		int n1, n2;
		char operator[10];
		char *p1, *p2;
		scanf("%x%s%x", &n1, operator, &n2);
		p1 = decimal_to_binary(n1);
		p2 = decimal_to_binary(n2);

		if (operator[0] == '+') printf("%s + %s = %d\n", p1, p2, n1+n2);
		else printf("%s - %s = %d\n", p1, p2, n1-n2);

		free(p1);
		free(p2);
	}	
	return 0;
}

char *decimal_to_binary(int n) {
	int c, d, count;
	char *pointer;

	count = 0;
	pointer = (char*)malloc(32+1);

	for (c = 12; c >= 0; c--) {

		d = n >> c;
		if (d & 1) *(pointer+count) = 1 + '0';
		else *(pointer+count) = 0 + '0';

		count++;
	}
	
	*(pointer+count) = '\0';

	return pointer;
}