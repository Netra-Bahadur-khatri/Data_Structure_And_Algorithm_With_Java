// find the time complexity of the function in the program from program2.c as shown in the 
// follow;
#include <stdio.h>
void func(int n){
    int sum = 0;
    int product = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d, %d\n", i, j);
        }
    }
}