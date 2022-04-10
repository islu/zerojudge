package zerojudge.d;

import java.util.*;

public class d634 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int n = Integer.parseInt(cin.nextLine());
			String[] spell = new String[n];
			for (int i = 0; i < n; i++) {
				spell[i] = cin.nextLine();
			}
			Arrays.sort(spell);
			for (String s : spell) {
				System.out.println(s);
			}
		}
	}
}
