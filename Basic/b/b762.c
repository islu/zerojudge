#include <stdio.h>
#include <string.h>

int main() {
	int N;
	int i;
	char cmd[20];
	int  record[4] = {0};
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%s", cmd);
		if (!(strcmp(cmd, "Get_Kill"))) {
			switch (record[3]) {
				case 0:
				case 1:
					record[0] += 1;
					record[3] += 1;
					printf("You have slain an enemie.\n");
					break;
				case 2:
					record[0] += 1;
					record[3] += 1;
					printf("KILLING SPREE!\n");
					break;
				case 3:
					record[0] += 1;
					record[3] += 1;
					printf("RAMPAGE~\n");
					break;
				case 4:
					record[0] += 1;
					record[3] += 1;
					printf("UNSTOPPABLE!\n");
					break;
				case 5:
					record[0] += 1;
					record[3] += 1;
					printf("DOMINATING!\n");
					break;
				case 6:
					record[0] += 1;
					record[3] += 1;
					printf("GUALIKE!\n");
					break;
				default :
					record[0] += 1;
					record[3] += 1;
					printf("LEGENDARY!\n");
					break;
			}
		}
		else if (!(strcmp(cmd, "Get_Assist"))) {
			record[2] += 1;
		}
		else if (!(strcmp(cmd, "Die"))) {
			switch(record[3]) {
				case 0:
				case 1:
				case 2:
					record[3] = 0;
					record[1] += 1;
					printf("You have been slained.\n");
					break;
				default :
					record[3] = 0;
					record[1] += 1;
					printf("SHUTDOWN.\n");
					break;
			}
		}
	}
	
	printf("%d/%d/%d\n", record[0], record[1], record[2]);
	
	for (i = 0; i < 4; i++) {
		record[i] = 0;

}