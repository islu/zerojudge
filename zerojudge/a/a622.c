#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[17][100];
	int n=0, max=0;
	int i, j;
	while(gets(name[n])) {
		if(strcmp(name[n],"END")==0) break;
		if(max<strlen(name[n])) max=strlen(name[n]);
		n++;
	}
	for(i=0;i<max;i++) {
		for(j=0;j<n;j++) {
			if(i>=strlen(name[j])) printf("   ");
			else printf("%c  ", name[j][i]);
		}
		printf("\n");
	}
	return 0;
}
