package zerojudge.i;

import java.util.Scanner;

public class i840 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String[] matrix = new String[5];
        for (int i = 0; i < 5; i++) {
            matrix[i] = cin.nextLine();
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.print(matrix[j].charAt(i));
            }
            System.out.println();
        }
        cin.close();
    }
}
