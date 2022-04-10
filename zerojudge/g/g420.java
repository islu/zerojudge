package zerojudge.g;

import java.util.*;

public class g420 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int n = cin.nextInt();
			int m = cin.nextInt();
			int[] d = new int[n];
			int[] h = new int[n];
			for (int i = 0; i < n; i++) {
				d[i] = cin.nextInt();
			}
			for (int i = 0; i < n; i++) {
				h[i] = cin.nextInt();
			}
			int level = 0;
			for (int i = 0; i < n; i++) {
				level++;
				if (m - d[i] >= 0) {
					m = m - d[i] + h[i];
				} else {
					break;
				}
			}
			System.out.println(level);
		}
	}
}
