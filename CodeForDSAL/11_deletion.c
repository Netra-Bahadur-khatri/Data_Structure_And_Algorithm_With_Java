#include <stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void IndexDeletion(int arr[], int size, int index){
    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    

}
int main(){
    int arr[20] = {12,34,23,45,67,90,89};
    int size = 7, index = 4, capacity = 20;
    display(arr, size);
    size -= 1;
    IndexDeletion(arr, size, index);
    display(arr, size);

    return 0;
}
