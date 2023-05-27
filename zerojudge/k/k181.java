package zerojudge.k;

import java.util.Scanner;

public class k181 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNext()) {
            String id = cin.nextLine();
            int count = 0;
            for (int i = 1; i < id.length(); i++) {
                if (id.charAt(i) == '8') {
                    count++;
                }
            }
            System.out.println(String.format("%s can get %d%% off.", id, count * 10));
        }
        cin.close();
    }
}
