package zerojudge.g;

import java.util.Scanner;

public class g779 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            int N = cin.nextInt();
            int K = cin.nextInt();

            if (N % K == 0) {
                System.out.println("YES");
            } else {
                int num = N;
                boolean flag = false;
                while (num > 0) {
                    if (num % 10 == K)
                        flag = true;
                    num = num / 10;
                }
                if (flag)
                    System.out.println("YES");
                else
                    System.out.println("NO");
            }
        }
        cin.close();
    }
}
