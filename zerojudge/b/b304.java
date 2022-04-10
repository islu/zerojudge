package zerojudge.b;

import java.util.*;

public class b304 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int n = Integer.parseInt(cin.nextLine());
			for (int i = 0; i < n; i++) {
				char[] parentheses = cin.nextLine().toCharArray();
				Stack st = new Stack();
				for (int j = 0; j < parentheses.length; j++) {
					if (st.empty()) {
						st.push(parentheses[j]);
					} else if ((st.peek().equals('(') && parentheses[j] == ')')
						|| (st.peek().equals('[') && parentheses[j] == ']')
					) {
						st.pop();
					} else {
						st.push(parentheses[j]);
					}
				}
				if (st.empty()) System.out.println("Yes");
				else System.out.println("No");
			}
		}
	}
}
