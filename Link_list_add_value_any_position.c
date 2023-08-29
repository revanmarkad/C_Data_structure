
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node
{
    int data;
    struct node *next;
};

// Function to create a singly linked list
struct node *create(int n)
{
    struct node *newnode, *first = NULL, *temp;
    int i;

    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the value: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (first == NULL)
        {
            first = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return first;
}

// Function to display the linked list
void display(struct node *first)
{
    while (first != NULL)
    {
        printf("\n%d", first->data);
        first = first->next;
    }
}

// Function to insert a node at a specified position
struct node *insert(struct node *first, int value, int position)
{
    struct node *newnode, *temp = first;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (position == 1)
    {
        newnode->next = first;
        return newnode;
    }

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("\nInvalid position!");
        return first;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return first;
}

int main()
{
    int n, value, position;
    struct node *first = NULL;

    printf("Enter how many nodes: ");
    scanf("%d", &n);

    // Create the linked list
    first = create(n);

    printf("\nDisplaying linked list:");
    display(first);

    // Insert a node at a specified position
    printf("\nEnter value to insert: ");
    scanf("%d", &value);
    printf("Enter position to insert at: ");
    scanf("%d", &position);

    first = insert(first, value, position);

    printf("\nDisplaying linked list after insertion:");
    display(first);

    return 0;
}