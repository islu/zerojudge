package zerojudge.g;

import java.util.*;

public class g308 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int N = cin.nextInt();
			int T = cin.nextInt();
			int[] x = new int[N];
			int[] y = new int[N];
			for (int i = 0; i < N; i++) {
				x[i] = cin.nextInt();
			}
			for (int i = 0; i < N; i++) {
				y[i] = cin.nextInt();
			}
			int brownie = 0;
			while (x[T] != -1) {
				brownie += y[T];
				y[T] = 0;
				int next = x[T];
				x[T] = -1;
				T = next;
			}
			System.out.println(brownie);
		}
	}
}
