package Questions.Step_3_Arrays;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class IntersectionOfTwoArrays {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> set1 = new HashSet<>();
        for (int n : nums1)
            set1.add(n);

        Set<Integer> set2 = new HashSet<>();
        for (int n : nums2)
            set2.add(n);

        // retainAll implicitly finds intersection but modifies the set
        set1.retainAll(set2);

        int[] result = new int[set1.size()];
        int i = 0;
        for (int num : set1) {
            result[i++] = num;
        }
        return result;
    }

    public static void main(String[] args) {
        IntersectionOfTwoArrays solution = new IntersectionOfTwoArrays();
        int[] nums1 = { 1, 2, 2, 1 };
        int[] nums2 = { 2, 2 };
        int[] result = solution.intersection(nums1, nums2);
        System.out.println("Intersection: " + Arrays.toString(result)); // Output: [2]
    }
}
