/* 연결자료구조를 이용한 큐 */

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE  {
  char data;
  struct NODE* link;      //자기참조구조체
}node;

typedef struct  {
  node* rear;
  node* front;
}linkQ;

linkQ* create();
linkQ* enqueue(linkQ* lq, char value);


void main()
{
  linkQ*lq = create();

   enqueue(lq, 'A');
   printf("%d\n",lq->front->data);
   //enqueue(lq, 'B');
   //printf("%d\n",lq->front->data);
   //enqueue(lq, 'C');
   // printf("%d\n",lq->front->data);

}

/*int isEmpty(queue* lq) {
    return lq->front == NULL;
}*/



linkQ* create()  {
  linkQ* lq = (linkQ*)malloc(sizeof(linkQ));
  if (lq == NULL)  {
      printf("메모리 할당에 실패했습니다.\n");
      exit(1);
  }
  lq -> front = NULL;
  lq -> rear = NULL;
  return lq;
}

linkQ* enqueue(linkQ*lq, char value) {

}





