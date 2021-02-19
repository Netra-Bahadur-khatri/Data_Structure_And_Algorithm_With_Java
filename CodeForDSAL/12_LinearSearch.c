#include <stdio.h>
int LinearSearch(int arr[], int sizeOfArray,int element){
    for (int i = 0; i < sizeOfArray; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,3,4,5,6,7,8,9,12,34,56,78,14};
    int element = 12;
    int sizeOfArray = sizeof(arr)/sizeof(int);
    LinearSearch(arr, sizeOfArray, element);
    printf("The element %d was found at index %d ", element, LinearSearch(arr, sizeOfArray, element));
    return 0;

}