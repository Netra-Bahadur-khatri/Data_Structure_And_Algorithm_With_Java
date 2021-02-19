#include <stdio.h>
// Traversal in Abstract data types
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}
int main(){

    int arr[100] = {1,4,5,6,89};
    display(arr, 4);

    return 0;
}