package zerojudge.g;

import java.util.Scanner;

public class g384 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            String s = cin.nextLine();
            int sum = 0;
            for (char c : s.toCharArray()) {
                sum += c - 'A' + 1;
            }
            System.out.println(sum);
        }
        cin.close();
    }
}
