#include <stdio.h>
// #include <stdlib.h>
#include <string.h>

struct User {
	// char* Name;
	char Name[31];
	int IsAccept;
	int IsOnePass;
};
struct Log {
	char Name[31];
	char State[4];
};

typedef struct User User;
typedef struct Log Log;

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		int i, j;
		int userIndex = 0;
		User users[N];
		Log logs[N];
		// 初始值
		for (i = 0; i < N; i++) {
			// users[i].Name = "";
			users[i].IsAccept = 0;
			users[i].IsOnePass = 0;
		}
		// 讀取&紀錄資料
		for (i = 0; i < N; i++) {
			scanf("%s %s", &logs[i].Name, &logs[i].State);
		}
		// 處理是否AC
		for (i = N - 1; i >= 0; i--) {
			int isExist = 0;
			for (j = 0; j < userIndex; j++) {
				if (strcmp(users[j].Name, logs[i].Name) == 0) {
					if (strcmp("AC", logs[i].State) == 0) {
						users[j].IsAccept = 1;
					}
					isExist = 1;
				}
			}
			if (isExist == 0) {
				// logs[logsIndex].Name = strdup(name);
				strcpy(users[userIndex].Name, logs[i].Name);
				if (strcmp("AC", logs[i].State) == 0) {
					users[userIndex].IsAccept = 1;
					users[userIndex].IsOnePass = 1;
				}
				userIndex += 1;
			}
		}
		// 計算秒殺率
		float totalOnePass = 0.0;
		float totalAccept = 0.0;
		for (i = 0; i < userIndex; i++) {
			if (users[i].IsAccept != 0) {
				totalAccept += 1;
			}
			if (users[i].IsOnePass != 0) {
				totalOnePass += 1;
			}
		}
		printf("%d%%\n", (int)(totalOnePass / totalAccept * 100.0));
	}
	return 0;
}
