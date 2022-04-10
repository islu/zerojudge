package zerojudge.f;

import java.util.*;

public class f004 {
	public static void main(String[] args) {
		int[] nums = {1, 5, 10, 50, 100, 500, 1000};
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int n = cin.nextInt();
			int n2 = n;
			int[] ans = new int[7];
			Arrays.fill(ans, 0);
			
			for (int i = 6; i >= 0; i--) {
				ans[i] = n2 / nums[i];
				n2 = n2 % nums[i];
			}

			boolean hasPrevAns = false;
			StringBuilder sb = new StringBuilder();
			sb.append(String.format("%d = ", n));
			for (int i = 6; i >= 0; i--) {
				// System.out.println(ans[i]);
				if (ans[i] != 0) {
					if (hasPrevAns) {
						sb.append(String.format(" + %d*%d", nums[i], ans[i]));
					} else {
						sb.append(String.format("%d*%d", nums[i], ans[i]));
						hasPrevAns = true;
					}
				}
			}

			System.out.println(sb);
		}
	}
}
