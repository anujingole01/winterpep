package Questions.Step_4_Binary_Search;

public class ArrangingCoins {
    public int arrangeCoins(int n) {
        long left = 0, right = n;
        while (left <= right) {
            long k = left + (right - left) / 2;
            long curr = k * (k + 1) / 2;
            if (curr == n)
                return (int) k;
            if (n < curr) {
                right = k - 1;
            } else {
                left = k + 1;
            }
        }
        return (int) right;
    }

    public static void main(String[] args) {
        ArrangingCoins solution = new ArrangingCoins();
        int n = 5;
        System.out.println("Completed Rows: " + solution.arrangeCoins(n)); // Output: 2
    }
}
