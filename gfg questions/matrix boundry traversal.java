class Solution {
    public ArrayList<Integer> boundaryTraversal(int[][] matrix) {
        ArrayList<Integer> ans = new ArrayList<>();

        int n = matrix.length;
        int m = matrix[0].length;

        // Single row
        if (n == 1) {
            for (int j = 0; j < m; j++)
                ans.add(matrix[0][j]);
            return ans;
        }

        // Single column
        if (m == 1) {
            for (int i = 0; i < n; i++)
                ans.add(matrix[i][0]);
            return ans;
        }

        // Top row
        for (int j = 0; j < m; j++)
            ans.add(matrix[0][j]);

        // Right column
        for (int i = 1; i < n; i++)
            ans.add(matrix[i][m - 1]);

        // Bottom row
        for (int j = m - 2; j >= 0; j--)
            ans.add(matrix[n - 1][j]);

        // Left column
        for (int i = n - 2; i >= 1; i--)
            ans.add(matrix[i][0]);

        return ans;
    }
}