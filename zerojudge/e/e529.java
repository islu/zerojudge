package zerojudge.e;

import java.util.*;

public class e529 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int T = Integer.parseInt(cin.nextLine());
			for (int i = 0; i < T; i++) {
				cin.nextLine();
				String[] idxs = cin.nextLine().split(" ");
				String[] nums = cin.nextLine().split(" ");
				Map<Integer, String> map = new HashMap<>();
				List<Integer> list = new ArrayList();
				for (int j = 0; j < idxs.length; j++) {
					int index = Integer.parseInt(idxs[j]);
					list.add(index);
					map.put(index, nums[j]);
				}
				Collections.sort(list);
				for (Integer key : list) {
					System.out.println(map.get(key));
				}
			}
		}
	}
}
