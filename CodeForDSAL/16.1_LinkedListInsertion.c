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
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *inserAtFirst(struct Node *head, int data)
{
    // Dynamically allocating an memory for ptr in heap section of memory.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    ptr = head;
    return ptr;
}
int main()
{
    // Declaration of Node
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocating memory in linked list in heap section
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Assinging values to each struct node in linked list in heap section of memory distribution
    // Linking first and second linked list
    head->data = 56;
    head->next = second;

    // Linking second and third linked list
    second->data = 60;
    second->next = third;

    // Linking third and fourth linked list
    third->data = 64;
    third->next = fourth;

    // Linkig fourth and fifth linked list
    fourth->data = 68;
    fourth->next = fifth;

    // Terminating fifth linked list With NULL
    fifth->data = 72;
    fifth->next = NULL;

    // calling an linkedListTraversal function
    linkedListTraversal(head);
    head = inserAtFirst(head, 23);
    printf("Next line printing from here.");
    linkedListTraversal(head);

    return 0;
}