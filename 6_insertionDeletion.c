#include<stdio.h>
#include<stdlib.h>
 struct Node{
     int data ,i,p,q;
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


//case2: deleting the  element at a given index from the linked list
    
    struct Node * deleteATIndex(struct Node * head,int index){
       struct Node * p = head;
       struct Node * q = head->next;
        for (int i=0; i < index-1; i++){
            p = p->next;
            q = q->next;

        }
        p->next = q->next;
         free(q);
        return head;
    }

//case3: deleting the  last  element  from the linked list
    
    struct Node * deleteAtLast(struct Node * head){
       struct Node * p = head;
       struct Node * q = head->next;
        while(q->next !=NULL)
        {
            p = p->next;
            q = q->next;

        }
        p->next = NULL;
         free(q);
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

   //head = deleteAtindex(head);
     
     head = deleteAtLast(head);

    printf("linked list after deletion\n");
     linkedListTraversal(head);


    return 0;



 }