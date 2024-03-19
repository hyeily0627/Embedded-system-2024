//아직 오류 못잡은 코드

/* 순차자료구조를 이용한 큐자료구조 */
#include <stdlib.h>
#include <stdio.h>
#define QSIZE 10

typedef struct  {
  int front;
  int rear;
  char queue[QSIZE];
}queue;

void isEmpty(queue*);
void isFull(queue*);
queue* create();
queue* enqueue(queue*, int);
queue* dequeue(queue*);
void printqueue(queue*);

void main()
{
  queue* a = create();
  enqueue(a, 'A');
  printqueue(a);
  dequeue(a);
  printqueue(a);
  free(a);      //동적할당 해제
}

queue* isEmpty(queue* q)
{
  if(q->rear ==  q->front) {
    printf("Queue os empty!!\n");
    return ;
    }else {
    return ;
    }
}
queue* isFull(queue* q)
{
  if(q->rear == QSIZE - 1)  {
    printf("Queue is Full!!\n");
    return ;
    }else {
    return ;
    }
}

queue* create()
{
  // 동적할당
  queue* newqueue =(queue*)malloc(sizeof(queue));
  if(newqueue == NULL) exit(1);
  newqueue -> front = 0;
  newqueue -> rear = 0;
  return newqueue ;
}

queue* enqueue(queue* q, int value)
{
  if isFull() {           //(q->rear == QSIZE - 1
  //printf("큐가 가득 찼습니다. 요소를 추가할 수 없습니다.\n");
    return q;
    }

  q->queue[(q->rear)]= value;
  (q->rear)++;
  return q ;
}

queue* dequeue(queue* q)
{
  if isEmpty() {            //(q->front == q->rear)
    //printf("큐가 비어 있습니다. 요소를 삭제할 수 없습니다.\n");
    return q;
    }

  q->queue[(q->front)];
  (q->front)++;
  return q;
}

void printqueue(queue* q)
{
  for(int i = q->front+1; i <=  q->rear; i++)  {
    printf("%c\n",q->queue[i-1]);
    }
}
