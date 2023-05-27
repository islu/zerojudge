package zerojudge.k;

import java.text.DecimalFormat;
import java.util.Scanner;

public class k182 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        double sum = 0.0;
        for (int i = 0; i < n; i++) {
            sum += cin.nextInt();
        }
        double number = sum / n;
        DecimalFormat df = new DecimalFormat("#.##");
        String formattedNumber = df.format(number);
        // 去掉末尾的小數點連續 0
        formattedNumber = formattedNumber.replaceAll("\\.0*$", "");
        System.out.println(formattedNumber);
        cin.close();
    }
}
