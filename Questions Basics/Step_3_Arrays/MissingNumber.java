package Questions.Step_3_Arrays;

public class MissingNumber {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = n * (n + 1) / 2;
        int actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }
        return sum - actualSum;
    }

    public static void main(String[] args) {
        MissingNumber solution = new MissingNumber();
        int[] nums = { 3, 0, 1 };
        System.out.println("Missing Number: " + solution.missingNumber(nums)); // Output: 2
    }
}
