package zerojudge.b;

import java.util.*;

public class b581 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int T = Integer.parseInt(cin.nextLine());
			for (int i = 0; i < T; i++) {
				String nums = cin.nextLine();
				int ans = 0;
				for (String n : nums.split(" ")) {
					ans += Integer.parseInt(n);
				}
				System.out.println(ans);
			}
		}
	}
}
