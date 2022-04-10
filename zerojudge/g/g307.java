package zerojudge.g;

import java.util.*;

public class g307 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int N = cin.nextInt();
			int K = cin.nextInt();
			int T = cin.nextInt();
			boolean isAllPass = true;
			for (int i = 0; i < N; i++) {
				int totalScore = 0;
				int maxScore = -1;
				int minScore = 2000;
				for (int j = 0; j < K; j++) {
					int s = cin.nextInt();
					totalScore += s;
					minScore = Math.min(minScore, s);
					maxScore = Math.max(maxScore, s);
				}
				if ((totalScore-maxScore-minScore) / (K-2) >= T) {
					System.out.println(i);
					isAllPass = false;
				}
			}
			if (isAllPass) System.out.println("A is for apple.");
		}
	}
}

// 解法1
/* 
public class g307 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			int N = cin.nextInt();
			int K = cin.nextInt();
			int T = cin.nextInt();
			int[] x = new int[K];
			boolean isAllPass = true;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < K; j++) {
					x[j] = cin.nextInt();
				}
				Arrays.sort(x);
				int score = 0;
				int count = 0;
				for (int j = 1; j < K-1; j++) {
					score += x[j];
					count++;
				}
				if (score / count >= T) {
					System.out.println(i);
					isAllPass = false;
				}
			}
			if (isAllPass) System.out.println("A is for apple.");
		}
	}
}
*/
