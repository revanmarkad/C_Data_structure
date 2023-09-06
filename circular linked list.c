#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* create(int n)
{
    struct node* newnode, *first = NULL, *temp = NULL;
    int i;

    for (i = 1; i <= n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the value: ");
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

    // Make the circular connection
    if (temp != NULL)
    {
        temp->next = first;
    }

    return first;
}

void display(struct node* first)
{
    struct node* current = first;

    if (first == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != first);
}

int main()
{
    int n;
    struct node* first = NULL;
    printf("\n Enter how many nodes: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Number of nodes must be greater than zero.\n");
        return 1; // Exit with an error code
    }

    first = create(n);

    printf("\n Display circular linked list: ");
    display(first);

    // No need to free memory for a circular linked list, as it's an infinite loop.
    // You can add a termination condition if needed.

    return 0;
}

