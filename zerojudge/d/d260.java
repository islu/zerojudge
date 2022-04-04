import java.util.*;

public class d260 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		while (cin.hasNext()) {
			
			int N = cin.nextInt();
			
			for (int i = 0; i < N; i++) {
				
				int[] lines = new int[4];
				
				for (int j = 0; j < 4; j++) {
					lines[j] = cin.nextInt();
				}
				
				Arrays.sort(lines);

				if (isSquare(lines)) System.out.println("square");
				else if (isRectangle(lines)) System.out.println("rectangle");
				else if (isQuadrangle(lines))  System.out.println("quadrangle");
				else System.out.println("banana");
			}
		}
	}

	static boolean isSquare(int[] lines) {
		return lines[0] == lines[3];
	}
	
	static boolean isRectangle(int[] lines) {
		return lines[0] == lines[1] && lines[2] == lines[3];
	}

	static boolean isQuadrangle(int[] lines) {
		return lines[0] + lines[1] + lines[2] > lines[3];
	}
}
