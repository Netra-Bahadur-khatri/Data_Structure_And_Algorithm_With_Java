
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
// inserting node at first of linked list
struct Node *insertAtFirst(struct Node *head, int data)
{
    // Dynamically allocatig memory in linked list in heap section.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    // Dynamically allocatig memory in linked list in heap section.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
    
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
    
}
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode,int data)
{
    // Dynamically allocatig memory in linked list in heap section.
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
    
}
struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;

    
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

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 886);
    // linkedListTraversal(head);
    // head = insertAtIndex(head, 126,1);
    // linkedListTraversal(head);

    // printf("Linked list after insertion:\n");
    // head = insertAtEnd(head, 126);
    // linkedListTraversal(head);

    head = insertAfterNode(head, second,45);
    printf("Linked list after insertion:\n");
    linkedListTraversal(head);

    return 0;
}