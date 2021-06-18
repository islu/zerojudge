#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 26

const char num_to_chr_tabel[] = "mjqhofawcpnsexdkvgtzblryui";
const char chr_to_num_table[] = "uzrmatifxopnhwvbslekycqjgd";

int firstChr(char*, char);
int isChr(char);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j, m;
		for (i = 0; i < n; i++) {
			scanf("%d", &m);
			char str[m][3];
			
			for (j = 0; j < m; j++)
				scanf("%s", str[j]);

			if (isChr(str[0][0]) == 1) {
				int ans = 0;
				for (j = 0; j < m; j++)
					ans += firstChr(chr_to_num_table, str[j][0]) + 1;

				printf("%d", ans);
			}
			else if (isChr(str[0][0]) == 0) {
				for (j = 0; j < m; j++)
					printf("%c", num_to_chr_tabel[atoi(str[j])-1]);
			}

			printf("\n");
		}
	}
	return 0;
}

int firstChr(char *table, char target) {
	int i;
	for (i = 0; i < SIZE; i++) {
		if (table[i] == target) return i;		
	}
	return -1;
}

int isChr(char target) {
	if ('0' <= target && target <= '9') return 0;
	else if ('a' <= target && target <= 'z') return 1;
	else return -1;
}