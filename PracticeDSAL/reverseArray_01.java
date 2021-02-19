import java.util.Scanner;

public class reverseArray_01 {

    //Reversing an array:
    static void reverseArray(int num[], int start, int end){
        //Now, Swap the array with first and last position
        while(start < end){
            int temp;
            temp = num[start];
            num[start] = num[end];
            num[end] = temp;
            start++;
            end--;
        }
    }

    //Printing an array:
    static void printArray(int num[], int size){
        for(int i = 0; i < num.length; i++){
            System.out.print(num[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       /*
        Write a program to reverse an array or string ?
       */
      int[] num = {1,2,3,4,5,6,7,8,9,10};
      
      //Priting a array before reversing:
      System.out.print("\nBefore Reversing an array: ");
      for(int i = 0; i < num.length; i++){
          System.out.print(num[i] + " ");
      }
      System.out.println(" ");

      //Calling an reverseArray() functions:
      reverseArray(num, 0, 9);
      System.out.print("\nAfter Reversing an array is: ");
      printArray(num, 9);

      System.out.println();
   } 
}
