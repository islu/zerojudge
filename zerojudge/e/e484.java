package zerojudge.e;

import java.util.Scanner;

public class e484 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        boolean flag = false;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = true;
                break;
            }
        }
        if (flag)
            System.out.println("no");
        else
            System.out.println("yes");
        cin.close();
    }
}
