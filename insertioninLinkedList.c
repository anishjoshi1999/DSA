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
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *ptr;
    int a;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    ptr = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 10;
    second->next = third;

    // Terminate the list at the third node
    third->data = 15;
    third->next = NULL;
    // giving data to new node
    printf("Enter the value you want to add at the beginning of your Linked List\n");
    scanf("%d", &a);
    // we would need to have the head pointer pointing to this new node and the new node’s pointer to the current head.
    ptr->data = a;
    ptr->next = head;
    // Traversing through a Linked List
    linkedListTraversal(ptr);
    return 0;
}