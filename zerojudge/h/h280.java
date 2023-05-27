package zerojudge.h;

import java.util.Scanner;

public class h280 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            String s1 = cin.nextLine();
            String s2 = cin.nextLine();
            System.out.println(s1 + s2);
        }
        cin.close();
    }
}
