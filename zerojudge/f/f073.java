package zerojudge.f;

import java.util.Scanner;

public class f073 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        String[] cards = new String[n];
        for (int i = 0; i < n; i++) {
            cards[i] = cin.next();
        }
        int k = cin.nextInt();
        String answer = "";
        for (int i = k; i < n; i++) {
            answer += cards[i] + " ";
        }
        for (int i = 0; i < k; i++) {
            answer += cards[i] + " ";
        }
        System.out.println(answer.trim());
        cin.close();
    }
}
