#include <stdio.h>
#include <string.h>

int main() {
	char N[50];
	scanf("%s", N);
	int len = strlen(N);
	if(len==1 && N[0]=='1') printf("0");
	else printf("1");
	return 0;
}