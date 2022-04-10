package zerojudge.f;

import java.util.*;

public class f047 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int counter = 1;
		List<String> t1 = new ArrayList<>();
		List<String> t2 = new ArrayList<>();
		List<String> t3 = new ArrayList<>();
		while (cin.hasNext()) {
			if (counter % 3 == 1) {
				t1.add(cin.next());
			} else if (counter % 3 == 2) {
				t2.add(cin.next());
			} else {
				t3.add(cin.next());
			}
			counter++;
		}
		
		Display(t1);
		Display(t2);
		Display(t3);
	}
	
	static void Display(List<String> list) {
		for (String s : list) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}
