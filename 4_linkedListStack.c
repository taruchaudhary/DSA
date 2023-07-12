#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
} *top = NULL;

void push(int data)
{
    struct node* newNode;
    newNode = malloc(sizeof(newNode));
    if (newNode == NULL)
    {
        printf("stack overflow");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;
    newNode->link = top;
    top = newNode;
}
void print()
{
    struct node* temp;
    temp = top;
    printf("the stack elements are: ");
    while (temp)
    {
        printf("%d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("1.push\n");
        printf("2.print\n");
        printf("3.quit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case1:
            printf("enter the elements to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case2:
            print();
            break;
        case3:
            exit(1);
        default:
            printf("wrong choice\n");
            break;
        }
    }
        return 0;
}