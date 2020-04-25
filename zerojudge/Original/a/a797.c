#include <stdio.h>

int main() {
	int T, M, H;
	int K[3][3];
	int i, j, k;
	int titket[3] = {400,600,1000};
	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			int way[3] = {0};
			int min = 0;
			int temp = 0;
			scanf("%d%d", &M, &H);
			for (j = 0; j < 3; j++) {
				for (k = 0; k < 3; k++) {
					scanf("%d", &K[k][j]);
				}
			}
			if ((6<=H && H<9) || (17<=H && H<19)) { 
				for (j = 0; j < 3; j++) {
					way[j] = (titket[j]*K[2][j])/100;
				}
				min = way[2];
				temp = 2;
				for (j = 2; j >= 0; j--) {
					if (min > way[j]) {
						min = way[j];
						temp = j;
					}
				}
				if (min > M) printf("Walk home\n");
				else if (temp == 0) printf("Bus\n");
				else if (temp == 1) printf("Train\n");
				else if (temp == 2) printf("HSR\n");
			}
			else if ((14<=H && H<16) || (21<=H && H<24) || (0<=H && H<6)) {
				for (j = 0; j < 3; j++) {
					way[j] = (titket[j]*K[0][j])/100;
				}
				min = way[2];
				temp = 2;
				for (j = 2; j >= 0; j--) {
					if (min > way[j]) {
						min = way[j];
						temp = j;
					}
				}
				if (min > M) printf("Walk home\n");
				else if (temp == 0) printf("Bus\n");
				else if (temp == 1) printf("Train\n");
				else if (temp == 2) printf("HSR\n");
			}
			else {
				for (j = 0; j < 3; j++) {
					way[j] = (titket[j]*K[1][j])/100;
				}
				min = way[2];
				temp = 2;
				for (j = 2; j >= 0; j--) {
					if (min > way[j]) {
						min = way[j];
						temp = j;
					}
				}
				if (min > M) printf("Walk home\n");
				else if (temp == 0) printf("Bus\n");
				else if (temp == 1) printf("Train\n");
				else if (temp == 2) printf("HSR\n");
			}
		}
	}
	return 0;
}