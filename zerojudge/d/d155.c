#include <stdio.h>
#include <string.h>

int main() {
	char computer[10];
	char player[10];
	int record_c = 0;
	int record_p = 0;
	while (scanf("%s %s", player, computer) != EOF) {
		if (!(strcmp(player, "Game"))) break;
		if (!(strcmp(player, "Scissors")) & !(strcmp(computer, "Paper"))) {
			record_p += 1;
			printf("紫獲勝\n");
		}
		else if (!(strcmp(player, "Stone")) & !(strcmp(computer, "Scissors"))) {
			record_p += 1;
			printf("紫獲勝\n");
		}
		else if (!(strcmp(player, "Paper")) & !(strcmp(computer, "Stone"))) {
			record_p += 1;
			printf("紫獲勝\n");
		}
		else {
			record_c += 1;
			printf("靈夢獲勝\n");
		}
	}
	printf("%s\n", record_p > record_c ? "螢火的蹤跡": "悲慘的籌措起香油錢");
	record_c = record_p = 0;
	return 0;
}