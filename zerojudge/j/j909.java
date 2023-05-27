package zerojudge.j;

import java.util.Scanner;

public class j909 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        String[] fullName = cin.nextLine().split(" ");
        System.out.println(String.format("%s, %s", fullName[1], fullName[0]));
        cin.close();
    }
}
