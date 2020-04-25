#include <stdio.h>
#include <string.h>

int main() {
	char s[10];
	int score[7] = {0};
	int i = 0;
	while (scanf("%c", &s[0]) != EOF) {
		if ('a'<=s[0] && s[0]<='z')      score[(s[0]-'a')%7]++;
		else if ('A'<=s[0] && s[0]<='Z') score[(s[0]-'A')%7]++;
	}
	int max = 0;
	int index = 0;
	for (i = 0; i < 7; i++) {
		if (max < score[i]) {
			max = score[i];
			index = i;
		}
	}
	switch (index) {
		case 0:
			printf("Saber\n");
			break;
		case 1:
			printf("Lancer\n");
			break;
		case 2:
			printf("Archer\n");
			break;
		case 3:
			printf("Rider\n");
			break;
		case 4:
			printf("Caster\n");
			break;
		case 5:
			printf("Assassin\n");
			break;
		case 6:
			printf("Berserker\n");
			break;
	}
	return 0;
}