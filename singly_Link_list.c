#include<stdio.h>
#include<stdlib.h>  // Include this header for malloc

struct node
{
    int data;  // Change 'dat' to 'data'
    struct node* next;
};

struct node* create(int n)
{
    struct node* newnode, *first = NULL, *temp = NULL;  // Initialize temp to NULL
    int i;

    for (i = 1; i <= n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the value: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (first == NULL)
        {
            first = temp = newnode;  // Update temp with newnode
        }
        else
        {
            temp->next = newnode;  // Change 'new node' to 'newnode'
            temp = newnode;  // Update temp with newnode
        }
    }
    return first;  // Return the first node
}

void display(struct node* first)
{
    while (first != NULL)
    {
        printf("\n %d", first->data);
        first = first->next;
    }
}

int main()
{
    int n;
    struct node* first;
    printf("\n Enter how many nodes: ");
    scanf("%d", &n);
    first = create(n);
    printf("\n Display linked list:");
    display(first);

    // Free allocated memory after use
    while (first != NULL)
    {
        struct node* temp = first;
        first = first->next;
        free(temp);
    }

    return 0;
}
