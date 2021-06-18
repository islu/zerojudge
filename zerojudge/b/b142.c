#include <stdio.h>

struct student {
	char name[25];
	int s1;
	int s2;
	char c1[2];
	char c2[2];
	int p;
};

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		struct student st[N];
		int i;
		int max = 0;
		int maxIndex = 0;
		int total = 0;
		
		for (i = 0; i < N; i++)
			scanf("%s%d%d%s%s%d", st[i].name, &st[i].s1, &st[i].s2, st[i].c1, st[i].c2, &st[i].p);
		
		for (i = 0; i < N; i++) {
			int temp = total;
			if (st[i].s1 > 80 && st[i].p >= 1) total += 8000;
			if (st[i].s1 > 85 && st[i].s2 > 80) total += 4000;
			if (st[i].s1 > 90) total += 2000;
			if (st[i].s1 > 85 && st[i].c2[0] == 'Y') total += 1000;
			if (st[i].s2 > 80 && st[i].c1[0] == 'Y') total += 850;

			if (total - temp > max) {
				max = total - temp;
				maxIndex = i;
			}
		}

		printf("%s\n%d\n%d\n", st[maxIndex].name, max, total);

	}
	