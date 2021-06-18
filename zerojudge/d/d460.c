#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", (a>=6&&a<12)*590 + (a>=12&&a<18)*790 +(a>=18&&a<60)*890 + (a>=60)*399);
	return 0;
}