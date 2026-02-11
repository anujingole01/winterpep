package Questions.Step_3_Arrays;

public class MinimumSwapsToGroupLessThanK {

    // Function to find the minimum swaps to bring all elements less than or equal
    // to k together
    public int minSwap(int arr[], int n, int k) {
        int count = 0;
        for (int i = 0; i < n; ++i)
            if (arr[i] <= k)
                ++count;

        int bad = 0;
        for (int i = 0; i < count; ++i)
            if (arr[i] > k)
                ++bad;

        int ans = bad;
        for (int i = 0, j = count; j < n; ++i, ++j) {
            if (arr[i] > k)
                --bad;
            if (arr[j] > k)
                ++bad;
            ans = Math.min(ans, bad);
        }
        return ans;
    }

    public static void main(String[] args) {
        MinimumSwapsToGroupLessThanK solution = new MinimumSwapsToGroupLessThanK();
        int arr[] = { 2, 1, 5, 6, 3 };
        int n = arr.length;
        int k = 3;
        System.out.println("Minimum Swaps: " + solution.minSwap(arr, n, k)); // Output: 1
    }
}
