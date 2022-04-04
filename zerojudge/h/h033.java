import java.util.*;

public class h033 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			String message = cin.next();
			String noise = cin.next();

			message = message.replace(noise, "");
			StringBuilder sb = new StringBuilder(message);
			sb.reverse();
			String rev = sb.toString();

			if (message.equals(rev)) System.out.println("Yes");
			else System.out.println("No");
		}
	}
}
