#include <stdio.h>

void display(int arr[], int used_size){
    // code for traversal in Data structure and algorithm
    for (int i = 0; i < used_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int Insertion(int arr[], int used_size, int index, int element, int capacity){
    if(used_size >= capacity){
        return -1;
    }
    for (int i = 0; i < used_size; i++)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
    

}
int main(){
    int arr[50] = {2, 0, 1 , 4, 6, 67,89, 55};
    int used_size = 8, index = 3, element = 32;
    display(arr, 20);
    used_size += 1;
    Insertion(arr, used_size, index, element, 100);
    display(arr, used_size);
    return 0;
}