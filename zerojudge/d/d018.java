package zerojudge.d;

import java.text.DecimalFormat;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class d018 {
    public static void main(String[] args) {
        try (Scanner cin = new Scanner(System.in)) {
            while (cin.hasNext()) {
                String[] ary = cin.nextLine().split(" ");
                Map<Integer, Double> map = new HashMap<>();
                for (int i = 0; i < ary.length; i++) {
                    int key = Integer.parseInt(ary[i].split(":")[0]);
                    Double value = Double.parseDouble(ary[i].split(":")[1]);
                    map.put(key, value);
                }
                Double odd = 0.0;
                Double even = 0.0;
                for (Map.Entry<Integer, Double> entry : map.entrySet()) {
                    if (entry.getKey() % 2 == 0) {
                        even += entry.getValue();
                    } else {
                        odd += entry.getValue();
                    }
                }
                DecimalFormat decimalFormat = new DecimalFormat("###################.###########");
                System.out.println(decimalFormat.format(odd - even));
            }
        }
    }
}
