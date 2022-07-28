package zerojudge.h;

import java.util.Scanner;

public class h081 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            int n = cin.nextInt();
            int D = cin.nextInt();
            int profit = 0;
            int x = 0;
            boolean own = false;
            for (int i = 0; i < n; i++) {
                int y = cin.nextInt();
                if (i == 0) {
                    x = y;
                    own = true;
                } else if (own) {
                    if (y >= x + D) {
                        profit += y - x;
                        x = y;
                        own = false;
                    }
                } else {
                    if (y <= x - D) {
                        x = y;
                        own = true;
                    }
                }
            }
            System.out.println(profit);
        }
        cin.close();
    }
}
