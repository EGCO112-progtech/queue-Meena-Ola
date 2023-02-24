

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number=x;
  new_node->nextPtr=NULL;
  if(q->headPtr==NULL) q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(q->size>0){
     switch(t->order_number){
       case 1: printf("Mocha"); break;
       case 2: printf("Flat white"); break;
       case 3: 
       default: 
     }
   int value= t->data;
     q->headPtr=t->nextPtr;
     if(q->headPtr==NULL) q->tailPtr=NULL;
     q->size--;
     free(t);
       /*Finish dequeue */
   return value;
   }
   printf("Empty queue");
   return 0;
}

