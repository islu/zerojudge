#include <stdio.h>

int main() {
	char id[10];
	while (scanf("%s", id) != EOF) {
		int i;
		int check = 0;
		int counter = 0;	
		for (i = 0; i < 8; i++)
			check += (id[i]-48)*(8-i);
			
		check += id[8]-48;
		counter = (10-check%10)%10;
		switch (counter) {
			case 0:
				printf("BNZ\n");
				break;
			case 1:
				printf("AMW\n");
				break;
			case 2:
				printf("KLY\n");
				break;
			case 3:
				printf("JVX\n");
				break;
			case 4:
				printf("HU\n");
				break;
			case 5:
				printf("GT\n");
				break;
			case 6:
				printf("FS\n");
				break;
			case 7:
				printf("ER\n");
				break;
			case 8:
				printf("DOQ\n");
				break;
			case 9:
				printf("CIP\n");
				break;	
		}
	}
	return 0;
}