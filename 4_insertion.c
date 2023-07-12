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
 struct Node * insertAtFirst(struct Node *head,int data){
     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->next = head;
     ptr->data = data;
     return ptr;
 }

struct Node * insertAtEnd(struct Node *head,int data){
     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
     ptr->data = data;
     while(p->next!=NULL){
         p = p->next;
         p->next = ptr;
         ptr->next = NULL;
         return head;
     }
 }




 struct Node * insertAtIndex(struct Node *head,int data,int index){
     struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
     struct Node * p = head;
     int i = 0;
     while(i!=index-1){
         p = p->next;i++;
     }
     ptr->data = data;
     ptr->next = p->next;
     p->next = ptr;
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
    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtEnd(head,10);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);
    return 0;

 }