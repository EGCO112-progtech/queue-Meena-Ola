#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"
#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
/* For struct Queue*/
  Queue  q;
  q.headPtr=NULL;
  q.tailPtr=NULL;
  q.size=0;
  int i,x,cash,count=1;
  for(i=1;i<argc;i++){
    if(strcmp(argv[i],"x")==0){
      printf("Customer No.%d\n",count++);
      cash=0;
      //x=dequeue(&headPtr,&tailPtr);
      x=dequeue_struct(&q);
      if(x!=0) {
      printf("You have to pay %d\n",x);
      while (cash<x){
        cash=0;
        printf("Cash: ");
        scanf("%d", &cash);
      }
      printf("Thank you\n");
      if(cash>x) {
        cash=cash-x;
        printf("Change is %d\n", cash);
      }
      }
    }
    else {
      enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
      printf("My order is %d\n", atoi(argv[i]));
      i++;
      //enqueue(&headPtr,&tailPtr, atoi(argv[i]));
    }
  }
  printf("========================================\n");
  if(q.size>1) printf("There are %d ppl left in the queue\n", q.size);
  else if (q.size==1) printf("There is 1 ppl left in the queue\n");
  else if (q.size==0) printf("The queue is empty\n");
  while(q.size>0){
  clearqueue_struct(&q);
    }
  return 0;
}
