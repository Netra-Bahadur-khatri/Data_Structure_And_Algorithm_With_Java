#include <stdio.h>
#include <stdlib.h>

struct myArray{

    int total_size;
    int used_size;
    int *ptr;

};
// creating an array function
void createArray(struct myArray* a, int tSize,int uSize){
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // int * ptr = (int *) malloc(tSize*sizeof(int));

    a->total_size = tSize;
    a->used_size = uSize;
    
    a->ptr = (int *)malloc(tSize * sizeof(int));

}

void show(struct myArray *a){

    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \n", (a->ptr)[i]);
    }
    
}

void setValue(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter an elements %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;

    }
}

int main(){

    struct myArray marks;
    createArray(&marks, 100,20);
    printf("We are running setValue now: \n");
    setValue(&marks);
    printf("We are running show value now: \n");
    show(&marks);
    return 0;

}
