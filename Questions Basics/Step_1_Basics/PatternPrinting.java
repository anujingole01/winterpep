package Questions.Step_1_Basics;

import java.util.Scanner;

public class PatternPrinting {

    // Pattern 1: Square Pattern
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    public static void printSquare(int n) {
        System.out.println("Square Pattern:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    // Pattern 2: Right Triangle
    // *
    // * *
    // * * *
    // * * * *
    public static void printRightTriangle(int n) {
        System.out.println("Right Triangle Pattern:");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    // Pattern 3: Inverted Right Triangle
    // * * * *
    // * * *
    // * *
    // *
    public static void printInvertedRightTriangle(int n) {
        System.out.println("Inverted Right Triangle Pattern:");
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter n: ");
        // For testing purposes, we can hardcode or read Input
        // int n = sc.nextInt(); 
        int n = 5; 
        
        printSquare(n);
        System.out.println();
        printRightTriangle(n);
        System.out.println();
        printInvertedRightTriangle(n);
        
        // sc.close(); // Keep open if running multiple
    }
}
