package Questions.Step_5_Strings;

public class StringCompression {
    public int compress(char[] chars) {
        int anchor = 0, write = 0;
        for (int read = 0; read < chars.length; read++) {
            if (read + 1 == chars.length || chars[read + 1] != chars[read]) {
                chars[write++] = chars[anchor];
                if (read > anchor) {
                    for (char c : ("" + (read - anchor + 1)).toCharArray()) {
                        chars[write++] = c;
                    }
                }
                anchor = read + 1;
            }
        }
        return write;
    }

    public static void main(String[] args) {
        StringCompression solution = new StringCompression();
        char[] chars = { 'a', 'a', 'b', 'b', 'c', 'c', 'c' };
        int newLength = solution.compress(chars);
        System.out.println("New Length: " + newLength); // Output: 6
        System.out.print("Compressed Chars: ");
        for (int i = 0; i < newLength; i++) {
            System.out.print(chars[i] + " ");
        }
        System.out.println();
    }
}
