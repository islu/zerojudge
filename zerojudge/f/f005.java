package zerojudge.f;

import java.util.*;
// Same: a465
public class f005 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {

			int T = Integer.parseInt(cin.nextLine());
			
			for (int i = 0; i < T; i++) {

				int N = Integer.parseInt(cin.nextLine());
				char[] house = (cin.nextLine()).toCharArray();
				
				int p = 0;
				int ironGolemCount = 0;
				List<String> ironGolemPosition = new ArrayList<>();
				
				while (p < N) {
					if (house[p] == '.') {
						if (p+2 > N) {
							ironGolemPosition.add(Integer.toString(p+1));
						} else {
							ironGolemPosition.add(Integer.toString(p+2));
						}
						ironGolemCount++;
						p += 3;
					} else {
						p += 1;
					}
				}
				System.out.printf("Case %d: %d", i+1, ironGolemCount);
				if (ironGolemCount != 0) {
					StringBuilder sb = new StringBuilder();
					sb.append("(");
					sb.append(String.join(",", ironGolemPosition));
					sb.append(")");
					System.out.printf("%s\n", sb);
				}
				else {
					System.out.println();
				}
			}
		}
	}
}
