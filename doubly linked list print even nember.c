#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev; // Add a prev pointer
};

struct node *create(int n)
{
    struct node *newnode, *first, *temp;
    int i;
    first = NULL;
    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the Value : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL; // Initialize prev pointer
        if (first == NULL)
        {
            first = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp; // Set the prev pointer of the new node
            temp = newnode;
        }
    }
    return first; // Return the head of the doubly linked list
}

void displayEvenValues(struct node *first)
{
    printf("\n Display even values from the doubly linked list:");
    while (first != NULL)
    {
        if (first->data % 2 == 0)
        {
            printf("\n %d", first->data);
        }
        first = first->next;
    }
}

int main()
{
    int n;
    struct node *first;
    printf("\n Enter How Many Nodes : ");
    scanf("%d", &n);
    first = create(n);
    displayEvenValues(first); // Display even values only
    return 0;
}
