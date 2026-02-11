package Questions.Step_5_Strings;

public class FindIndexFirstOccurrence {
    public int strStr(String haystack, String needle) {
        return haystack.indexOf(needle);
    }

    // Alternative Implementation without using library function
    /*
    public int strStr(String haystack, String needle) {
        if (needle.length() == 0) return 0;
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substring(i, i + needle.length()).equals(needle)) {
                return i;
            }
        }
        return -1;
    }
    */

    public static void main(String[] args) {
        FindIndexFirstOccurrence solution = new FindIndexFirstOccurrence();
        String haystack = "sadbutsad";
        String needle = "sad";
        System.out.println("Index: " + solution.strStr(haystack, needle)); // Output: 0
    }
}
