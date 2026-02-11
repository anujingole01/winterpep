package Questions.Step_1_Basics;

public class Factorial {
    public long factorial(int N) {
        long fact = 1;
        for (int i = 1; i <= N; i++) {
            fact *= i;
        }
        return fact;
    }

    public static void main(String[] args) {
        Factorial solution = new Factorial();
        int N = 5;
        System.out.println("Factorial: " + solution.factorial(N)); // Output: 120
    }
}
