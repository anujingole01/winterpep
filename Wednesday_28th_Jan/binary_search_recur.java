package Wednesday_28th_Jan;

import java.util.Scanner;

public class binary_search_recur {

   static int binarySearch( int arr[], int low, int high, int tar){
        if(low > high){
            return -1;
        }

        int mid = low + (high - low)/2;

        if(arr[mid] == tar){
            return mid;
        }
        else if(tar < arr[mid]){
            return binarySearch(arr, low, mid - 1 , tar);
        }
        else{
            return binarySearch(arr, mid + 1, high, tar);
        }
    }


    public static void main(String[] args) {
        Scanner d = new Scanner ( System.in);
        int n = d.nextInt();

        int arr [] = new int[n];

        for(int i = 0; i < n; i++){
            arr[i] = d.nextInt();
        }

        int tar;
        System.out.println("Enter the the target value: ");
        tar = d.nextInt();

        int result = binarySearch(arr, 0, n - 1, tar);

        if(result != -1){
            System.out.println("Found  at index "+ result);
        }
        else{
            System.out.println("not found");
        }

        d.close();
    }
}
