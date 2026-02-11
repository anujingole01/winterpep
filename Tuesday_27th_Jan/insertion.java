package Tuesday_27th_Jan;

import java.util.Scanner;

public class insertion {
    public static void main(String[] args) {
        Scanner d = new Scanner(System.in);

        int n = d.nextInt();
        int arr [] = new int [n];

        for(int i = 0; i < n; i++){
            arr[i] = d.nextInt();
        }

        System.out.println("Before the sorting");
        for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }

        int l = arr.length;

        for (int i = 1; i < l; i++) {
            int key = arr[i];
            int j = i - 1;

            // shift elements greater than key
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }

         for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        
    }
}




