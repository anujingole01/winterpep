package Questions.Step_1_Basics;

public class PowerOfTwo {
    public boolean isPowerOfTwo(int n) {
        if (n <= 0)
            return false;
        return (n & (n - 1)) == 0;
    }

    public static void main(String[] args) {
        PowerOfTwo solution = new PowerOfTwo();
        int n = 16;
        System.out.println("Is Power of Two: " + solution.isPowerOfTwo(n)); // Output: true
    }
}
