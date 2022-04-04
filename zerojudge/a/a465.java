import java.util.*;

public class a465 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			
			int T = Integer.parseInt(cin.nextLine());
			
			for (int i = 0; i < T; i++) {
				
				int N = Integer.parseInt(cin.nextLine());
				char[] farm = (cin.nextLine()).toCharArray();
				
				int p = 0;
				int scarecrow = 0;

				while (p < N) {
					
					if (farm[p] == '.') {
						scarecrow++;
						p += 3;
					} else {
						p += 1;
					}
				}

				System.out.printf("Case %d: %d\n", i+1, scarecrow);
			}
		}
	}
}
