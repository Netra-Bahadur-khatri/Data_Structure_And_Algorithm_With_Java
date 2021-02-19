#include <stdio.h>

void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indexInsertion(int arr[], int size, int index, int capacity, int element){
    if(size >= capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
    
}
int main(){
    int arr[100] = {1,2,3,4,56,78};
    int size = 6, index = 2, element = 45;
    display(arr, size);
    indexInsertion(arr, size, index, 100, element);
    size += 1;
    display(arr, size);
    return 0;
}