

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number=x;
  new_node->qty=y;
  new_node->next=NULL;
  if(q->headPtr==NULL) q->headPtr=new_node;
  else q->tailPtr->next=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
  int price;
   if(q->size>0){
     switch(t->order_number){
       case 1: printf("Mocha\n"); price=70*t->qty; break;
       case 2: printf("Caramel Machiato\n"); price=75*t->qty; break;
       case 3: printf("Dirty\n"); price=80*t->qty; break;
       default: printf("No Food\n"); price=0; break;
     } //end switch
   int value= t->order_number;
     q->headPtr=t->next;
     if(q->headPtr==NULL) q->tailPtr=NULL;
     q->size--;
     free(t);
       /*Finish dequeue */
   return price;
   }
  
   printf("The queue is empty\n");
   return 0;
}

int clearqueue_struct(Queue *q){
  NodePtr t=q->headPtr;
  printf("dequeuing...\n");
  if(q->size>0){
  q->headPtr=t->next;
  if(q->headPtr==NULL) q->tailPtr=NULL;
    q->size--;
  free(t);
  }
       /*Finish dequeue */
   printf("The queue is empty\n");
  return 0;
}
