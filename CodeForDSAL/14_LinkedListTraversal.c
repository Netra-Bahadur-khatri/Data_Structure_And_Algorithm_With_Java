#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating memory for nodes in linked list in Heap section
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Linking first and second
    head->data = 23;
    head->next = second;

    // Linking second and third
    second->data = 34;
    second->next = third;

    // Terminating an third linked list
    third->data = 80;
    third->next = NULL;

    linkedListTraversal(head);

    return 0;
}