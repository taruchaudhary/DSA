#include<stdio.h>
#include<stdlib.h>
 struct Node{
     int data;
     struct Node * next;
 };
 void linkedListTraversal(struct Node *ptr)
 {
     while ( ptr != NULL)
     {
         printf("elements: %d\n",ptr->data);
         ptr = ptr->next;
     }
 }
 //case1: deleting the first element from the linked list
    
    struct Node * deleteFirst(struct Node * head){
        struct Node * ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }

 int main(){
     struct Node * head;
     struct Node * second;
    struct Node * third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7; 
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = NULL;
   printf("linked list before deletion\n");
    linkedListTraversal(head);

   head = deleteFirst(head);

    printf("linked list after deletion\n");
     linkedListTraversal(head);


    return 0;



 }