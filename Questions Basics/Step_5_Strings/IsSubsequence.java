package Questions.Step_5_Strings;

public class IsSubsequence {
    public boolean isSubsequence(String s, String t) {
        int i = 0, j = 0;
        while (i < s.length() && j < t.length()) {
            if (s.charAt(i) == t.charAt(j)) {
                i++;
            }
            j++;
        }
        return i == s.length();
    }

    public static void main(String[] args) {
        IsSubsequence solution = new IsSubsequence();
        String s = "abc";
        String t = "ahbgdc";
        System.out.println("Is Subsequence: " + solution.isSubsequence(s, t)); // Output: true
    }
}
