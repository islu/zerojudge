#include <stdio.h>
#include <string.h>

int findHead(char* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		if ('1'<=arr[i] && arr[i]<='9')
			return i;
	}
}
int findDot(char* arr, int len) {
	int i;
	for (i = 0; i < len; i++) {
		if (arr[i] == '.') return i;
	}
	return len;
}
int findEpo(char* arr, int dot_index, int head_index) {
	int epo = 0;
	int i;
	if (dot_index > head_index) {
		for (i = dot_index-1; i > head_index; i--) {
			if ('0'<=arr[i] && arr[i]<='9') epo += 1;
		}
		return epo;
	}
	else {
		for (i = dot_index-1; i < head_index; i++) {
			if ('0'<=arr[i] && arr[i]<='9') 
				epo += 1;
		}
		return epo * (-1); 
	}
}
void rounding(char* arr, char* ans, int len, int head_index, int k) {
	int i;
	int temp = 0;
	int c = 1;
	for (i = head_index; i < len; i++) {
		if (c > k) break;
		if ('0'<=arr[i] && arr[i]<='9') {
			ans[c] = arr[i];
			c += 1;
		}
	}
	if (arr[i]==',' || arr[i]=='.') i += 1;
	if (arr[i] >= '5') ans[c-1] += 1;
	for (i = c-1; i >= 0; i--) {
		if (ans[i] > '9') {
			ans[i-1] += 1;
			ans[i] = (ans[i]-'0')%10+'0';
		}
	}
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int i, j;
		char number[200];
		int k;
		for (i = 0; i < n; i++) {
			scanf("%s %d", number, &k);
			int len = strlen(number);
			char ans[200] = {'\0'};
			int head_index = 0, dot_index = 0;
			int epo = 0;
			
			ans[0] = '0';
			head_index = findHead(number, len);
			dot_index = findDot(number, len);
			epo = findEpo(number, dot_index, head_index);
			rounding(number, ans, len, head_index, k);
			
			int len2 = strlen(ans);
			if (ans[0] != '0') {
				printf("%c", ans[0]);
				for (j = 1; j < len2-1; j++) {
					if (j == 1) printf(".");
					printf("%c", ans[j]);
				}
				epo += 1;
			}
			else {
				printf("%c", ans[1]);
				for (j = 2; j < len2; j++) {
					if (j == 2) printf(".");
					printf("%c", ans[j]);
				}

			}
			printf("x10(%d)\n", epo);
		}
	}
	return 0;
}