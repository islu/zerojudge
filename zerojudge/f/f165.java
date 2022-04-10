package zerojudge.f;

import java.util.*;

public class f165 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int c = cin.nextInt();
			int s = cin.nextInt();

			if (s == 0) {
				System.out.println("OK!");
			} else {
				if (c % s == 0) System.out.println("OK!");
				else System.out.println(c % s);
			}
		}
	}
}
