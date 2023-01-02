package zerojudge.f;

import java.util.Scanner;

public class f700 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            String s = cin.nextLine();
            System.out.println(s);
            for (int i = 0; i < s.length(); i++) {
                System.out.print("~");
            }
            System.out.println();
        }
        cin.close();
    }
}
