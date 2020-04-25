#include <stdio.h>

// 如果有找到數字回傳陣列index，否則回傳-1
// 限制: 排序過的陣列，數字只出現一次
int binary_search(int[],int,int); 

int main() {
	int ary[10] = {1,2,3,4,7,8,10,11,12,30};
	printf("%d\n", binary_search(ary,10,5));
	printf("%d\n", binary_search(ary,10,1));
	printf("%d\n", binary_search(ary,10,12));
	return 0;
}

int binary_search(int ary[], int size, int target) {
	int L = 0;
	int R = size - 1;
	while (L <= R ) {
		int M = (L+R) / 2;
		if (ary[M] == target) return M;
		else if (ary[M] > target) R = M - 1;
		else if (ary[M] < target) L = M + 1;
	}
	return -1;
}

