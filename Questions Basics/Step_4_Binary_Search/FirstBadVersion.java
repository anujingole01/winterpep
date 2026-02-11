package Questions.Step_4_Binary_Search;

class VersionControl {
    boolean isBadVersion(int version) {
        // Mocking API for local testing
        // Assume version 4 and onwards are bad
        return version >= 4;
    }
}

public class FirstBadVersion extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    public static void main(String[] args) {
        FirstBadVersion solution = new FirstBadVersion();
        int n = 5;
        System.out.println("First Bad Version: " + solution.firstBadVersion(n)); // Output: 4
    }
}
