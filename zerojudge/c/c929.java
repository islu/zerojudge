package zerojudge.c;

import java.util.*;

public class c929 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			
			String op = cin.nextLine();
			String names = cin.nextLine();

			String[] student = names.split(op);

			for (String name : student) {
				System.out.println(name);
			}
		}
	}
}
