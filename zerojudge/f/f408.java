package zerojudge.f;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

public class f408 {
    public static void main(String[] args) {
        try (Scanner cin = new Scanner(System.in)) {
            while (cin.hasNext()) {
                int n = Integer.parseInt(cin.next());
                int[] nums = new int[n];
                HashMap<Integer, Boolean> people = new HashMap<>();
                for (int i = 0; i < n; i++) {
                    int house = Integer.parseInt(cin.next());
                    nums[i] = abs(house);
                    people.put(nums[i], isPositive(house));
                }
                Arrays.sort(nums);
                int res = 0;
                for (int i = 0; i < n - 1; i++) {
                    if (people.get(nums[i]) != people.get(nums[i + 1])) {
                        res++;
                    }
                }
                System.out.println(res);
            }
        }
    }

    private static boolean isPositive(int n) {
        return n >= 0;
    }

    private static int abs(int n) {
        return (n >= 0) ? n : n * -1;
    }
}
