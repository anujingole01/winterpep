class Solution {
    public int minSwap(int[] arr, int n, int k) {

        // Step 1: count elements <= k
        int good = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= k) {
                good++;
            }
        }

        // Step 2: count bad elements in first window
        int bad = 0;
        for (int i = 0; i < good; i++) {
            if (arr[i] > k) {
                bad++;
            }
        }

        int ans = bad;

        // Step 3: sliding window
        for (int i = 0, j = good; j < n; i++, j++) {

            if (arr[i] > k) {
                bad--;
            }

            if (arr[j] > k) {
                bad++;
            }

            ans = Math.min(ans, bad);
        }

        return ans;
    }
}