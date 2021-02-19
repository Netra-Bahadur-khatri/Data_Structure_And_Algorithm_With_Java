import java.util.Scanner;

public class maxMinArray_02 {

    static void findMaxElement(int arr[], int start){
        int maxElement = arr[start];
        for(int i = 0; i < arr.length; i++){
            if(arr[i] > maxElement){
                maxElement = arr[i];
            }
        }
        System.out.println("Maximum elements is "+maxElement);
    }

    static void findMinElement(int arr[], int start){
        int minElement = arr[start];
        for(int i = 0; i < arr.length; i++){
            if(arr[i] < minElement){
                minElement = arr[i];
            }
        }
        System.out.println("Minimum elements is "+minElement);
    }

    // this function just print an array
    static void printArray(int arr[], int size){
        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        /*
        Write an java program to find an maximum and minimum elements from an array?
        */

        int[] arr = {1,4,6,9,10,8,5,3,2,7};
        System.out.println("Printing a Original arrays: ");
        printArray(arr, 9);
        System.out.println("Returning an maximum elements from an arrays: ");
        findMaxElement(arr,1);
        System.out.println("Returning an minimum elements from an arrays: ");
        findMinElement(arr,1);
    }

}
