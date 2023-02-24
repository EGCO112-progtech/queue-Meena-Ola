//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
  struct node* next;
  int order_number;
  int qty;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr * tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number=x;
  new_node->next=NULL;
  if(*head==NULL) *head=new_node;
  else (*tail)->next=new_node;
  *tail=new_node;
    /*Finish queue*/
 }
}

int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int data= t->order_number;
     *head= t->next; // NULL
  if(*head==NULL) *tail=NULL;
  free(t);
   /* Finish dequeue*/
  return data;
   }
   printf("The queue is empty");
   return 0;
}



#endif
