package Questions.Step_5_Strings;

public class PalindromeString {
    public int isPalindrome(String S) {
        int i = 0, j = S.length() - 1;
        while (i < j) {
            if (S.charAt(i) != S.charAt(j)) {
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }

    public static void main(String[] args) {
        PalindromeString solution = new PalindromeString();
        String S = "abba";
        System.out.println("Is Palindrome: " + solution.isPalindrome(S)); // Output: 1
    }
}
