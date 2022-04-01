import java.util.Scanner;
import java.util.Arrays;

public class f046 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
		 	int w = Integer.parseInt(cin.nextLine());
			String m = cin.nextLine();
			int t = Integer.parseInt(cin.nextLine());

			char[] chars = new char[w];
			Arrays.fill(chars, ' ');
			String space = new String(chars);

			StringBuilder sb = new StringBuilder();
			sb.append(space);
			sb.append(m);
			sb.append(space);

			System.out.println(sb.substring(t, t+w));
		}
	}
}
