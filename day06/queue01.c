#include <stdio.h>
#define Q_SIZE 10

int queue[Q_SIZE];
int front = -1;
int rear = -1;

void enqueue (int _data)
{
   if (rear >= Q_SIZE -1) {
       printf("QUEUE OVERFLOW!!\n");
       return;
    }
    queue[++rear] = _data;

int dequeue() {
    if (front == rear) {
        printf("QUEUE UNDERFLOW\n");
        return -1;
    }
    return queue[++front];
}

void main()
{
  //int rear = -1;
  //int front = -1;
  //int queue[Q_SIZE];

  //enqueue(queue, rear, 10);
  enqueue(10);
  enqueue(20);
  enquque(30);

  printf("%d/n", dequque());
  printf("%d/n", dequque());
