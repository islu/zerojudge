package zerojudge.d;

import java.util.*;

public class d492 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int n = Integer.parseInt(cin.nextLine());
			cin.nextLine();
			for (int i = 0; i < n; i++) {
				Map<String, Integer> map = new HashMap<>();
				List<String> list = new ArrayList<>();
				int counter = 0;
				while (cin.hasNext()) {
					String tree = cin.nextLine();
					if (tree.equals("")) break;
					if (map.containsKey(tree)) {
						map.replace(tree, map.get(tree)+1);
					} else {
						map.put(tree, 1);
						list.add(tree);
					}
					counter++;
				}
				Collections.sort(list);
				for (String s : list) {
					System.out.printf("%s %.4f\n", s, map.get(s)/(double)counter*100);
				}
				System.out.println();
			}
		}
	}
}
