
int FastPow(int, int);

int FastPow(int x, int n) {
	if (n == 1) {
		return x;
	}
	if (n == 1) {
		return x;
	}
	// 如果 n = 2k (偶數)
	// 則 x^n = (x^k) * (x^k)
	if (n % 2 == 0) {
		int xk = FastPow(x, n/2);
		return xk * xk;
	}
	// 如果 n = 2k + 1 (奇數)
	// 則 x^n = x * (x^k) * (x^k)
	if (n % 2 != 0) {
		int xk = FastPow(x, (n-1)/2);
		return x * xk * xk;
	}
}
