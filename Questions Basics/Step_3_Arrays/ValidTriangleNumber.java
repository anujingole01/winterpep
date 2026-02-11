package Questions.Step_3_Arrays;

import java.util.Arrays;

public class ValidTriangleNumber {
    public int triangleNumber(int[] nums) {
        int count = 0;
        Arrays.sort(nums);
        for (int i = nums.length - 1; i >= 2; i--) {
            int l = 0, r = i - 1;
            while (l < r) {
                if (nums[l] + nums[r] > nums[i]) {
                    count += r - l;
                    r--;
                } else {
                    l++;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        ValidTriangleNumber solution = new ValidTriangleNumber();
        int[] nums = { 2, 2, 3, 4 };
        System.out.println("Valid Triangle Numbers: " + solution.triangleNumber(nums)); // Output: 3
    }
}
