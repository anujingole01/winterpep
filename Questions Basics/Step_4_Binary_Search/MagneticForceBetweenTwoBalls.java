package Questions.Step_4_Binary_Search;

import java.util.Arrays;

public class MagneticForceBetweenTwoBalls {
    public int maxDistance(int[] position, int m) {
        Arrays.sort(position);
        int l = 1, r = position[position.length - 1] - position[0];
        int ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (canPlace(position, m, mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }

    private boolean canPlace(int[] position, int m, int minForce) {
        int count = 1;
        int lastPos = position[0];
        for (int i = 1; i < position.length; i++) {
            if (position[i] - lastPos >= minForce) {
                count++;
                lastPos = position[i];
            }
        }
        return count >= m;
    }

    public static void main(String[] args) {
        MagneticForceBetweenTwoBalls solution = new MagneticForceBetweenTwoBalls();
        int[] position = { 1, 2, 3, 4, 7 };
        int m = 3;
        System.out.println("Max Distance: " + solution.maxDistance(position, m)); // Output: 3
    }
}
