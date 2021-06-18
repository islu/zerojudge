#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char name[50];
	char number[10];
	short grade[100];
};

struct sub_ans {
	char subject[50];
	char number[10];
	char sq[100];
};

typedef struct student Stu;
typedef struct sub_ans Ans;

int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		int i, j;
		Stu stu[m];
		Ans ans[n];
		for (i = 0; i < n; i++)
			scanf("%s %s %s", ans[i].number, ans[i].subject, ans[i].sq);
		for (i = 0; i < m; i++)
			scanf("%s %s", stu[i].number, stu[i].name);

		for (i = 0; i < n * m; i++) {
			int t1, t2, point, ans_len, str_len;
			char *str = (char*) malloc(sizeof(char) * 100 + 1);;
			scanf("%d %d %s", &t1, &t2, str);

			point = 0;
			ans_len = strlen(ans[t2-1].sq);
			str_len = strlen(str);

			if (str_len < ans_len) {
				for (j = 0; j < str_len; j++)
					if (str[j] == ans[t2-1].sq[j]) point++;
			}
			else {
				for (j = 0; j < ans_len; j++)
					if (str[j] == ans[t2-1].sq[j]) point++;
			}

			stu[t1-1].grade[t2-1] = 100/ans_len*point;

			free(str);
		}

		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				printf("%s,%s,", stu[i].number, stu[i].name);
				printf("%s,%s,", ans[j].number, ans[j].subject);
				printf("%d\n", stu[i].grade[j]);
			}
		}

	}
	return 0;
}