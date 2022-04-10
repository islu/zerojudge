package zerojudge.e;

import java.util.*;

public class e641 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		Map<Character, Character> map = new HashMap<>();
		map.put('B', '1');
		map.put('F', '1');
		map.put('P', '1');
		map.put('V', '1');
		map.put('C', '2');
		map.put('G', '2');
		map.put('J', '2');
		map.put('K', '2');
		map.put('Q', '2');
		map.put('S', '2');
		map.put('X', '2');
		map.put('Z', '2');
		map.put('D', '3');
		map.put('T', '3');
		map.put('L', '4');
		map.put('M', '5');
		map.put('N', '5');
		map.put('R', '6');
		while (cin.hasNext()) {
			char[] word = cin.nextLine().toCharArray();
			char prev = '0';
			for (int i = 0; i < word.length; i++) {
				if (map.containsKey(word[i])) {
					if (map.get(word[i]) != prev) {
						System.out.print(map.get(word[i]));
					}
					prev = map.get(word[i]);
				} else {
					prev = '0';
				}
			}
			System.out.println();
		}
	}
}
