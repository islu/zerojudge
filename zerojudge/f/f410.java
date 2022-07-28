package zerojudge.f;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class f410 {
    public static void main(String[] args) {
        try (Scanner cin = new Scanner(System.in)) {
            while (cin.hasNext()) {
                int n = Integer.parseInt(cin.next());
                int[] nums = new int[n];
                for (int i = 0; i < n; i++) {
                    nums[i] = Integer.parseInt(cin.next());
                }
                List<Integer> list = new ArrayList<>();
                for (int i = 0; i < n; i++) {
                    if (nums[i] % 2 == 0) {
                        System.out.print(nums[i] + " ");
                    } else {
                        list.add(nums[i]);
                    }
                }
                Collections.reverse(list);
                list.forEach(d -> System.out.print(d + " "));
                System.out.println();
            }
        }
    }
}
