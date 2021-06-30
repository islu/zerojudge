#include <stdio.h>
#include <string.h>

int main() {
	char name[50];
	char command[10];
	int w, h;
	int len;
	char star[37][25];
	int i, j;
	while(scanf("%s ", name) !=EOF) {
		scanf("%d %d %s", &w, &h, command);
		for(i=0;i<h;i++) {
			for(j=0;j<w;j++) {
				scanf(" %c", &star[j][i]);
			}
		}
		printf("%s\n", name);
		len = strlen(command);
		if(len >= 2) {
			for(i=h-1;i>=0;i--) {
					for(j=w-1;j>=0;j--) {
						printf("%c", star[j][i]);
					}
					printf("\n");
				}
		}
		else {
			if(command[0] == 'R') {
				for(i=0;i<h;i++) {
					for(j=w-1;j>=0;j--) {
						printf("%c", star[j][i]);
					}
					printf("\n");
				}
			}
			else if(command[0] == 'I') {
				for(i=h-1;i>=0;i--) {
					for(j=0;j<w;j++) {
						printf("%c", star[j][i]);
					}
					printf("\n");
				}
			}
		}
	}
	return 0;
}
