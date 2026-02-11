package Tuesday_27th_Jan;

import java.util.Scanner;

public class bubble {
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

        for(int i = 0; i < n - 1; i++){
            boolean swap = false;

            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    
                    swap = true;
                }
            }
             if(!swap) break;
        }

         for(int i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
     }
}

