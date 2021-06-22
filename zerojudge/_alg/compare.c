#include <stdio.h>

int minInt(int, int); // 比較兩數回傳較小的數字
int maxInt(int, int); // 比較兩數回傳較大的數字

int minInt(int n1, int n2) {
	if (n1 <= n2) {
		return n1;
	}
	if (n1 > n2) {
		return n2;
	}
}
int maxInt(int n1, int n2) {
	if (n1 <= n2) {
		return n2;
	}
	if (n1 > n2) {
		return n1;
	}
}
