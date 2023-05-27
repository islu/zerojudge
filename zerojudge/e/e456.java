package zerojudge.e;

import java.util.Scanner;

public class e456 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String[] words = cin.nextLine().split(" ");
        for (int i = 0; i < words.length; i++) {
            if (i + 1 < words.length) {
                System.out.print(words[i] + " little, ");
            } else {
                System.out.print(words[i] + " little Indians");
            }
        }
        cin.close();
    }
}
