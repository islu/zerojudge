package zerojudge.h;

import java.util.Scanner;

public class h215 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            int n = cin.nextInt();
            int answer = n * (n + 1) * (2 * n + 1) / 6;
            System.out.println(answer);
        }
        cin.close();
    }
}
