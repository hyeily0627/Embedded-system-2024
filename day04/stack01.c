// 배열로 구현
#include <stdio.h> 
#define STACK_SZ 100 //100보다 많은 값을 스택에 푸시하면 오버플로우

int stack[STACK_SZ];
int top = -1;
void push();
int pop();

void main()
{
  push(3);
  push(5);
  push(10);

  printf("%d\n", pop());
}

int isFull()  
{
  if(top == STACK_SZ -1)  {
  return -1;
  } else {
    return 0;  // 컴퓨터는 0을 거짓으로 인식, 나머지는 모두 참으로 인식
  } 
}

int isEmpty()
{  
  if(top <= -1)  {
  // 물리적인 충격으로 -1이 -2가 되는 상황이 발생할 수 있으므로
  // == 이 아닌 <= 을 사용함으로써 안정성을 더해줌
  return -1;  
  } else {
    return 0;
  }
}

void push(int data)
{
  if(isFull())  { 
  //if(top == STACK_SZ-1) {         
    printf("stack overflow!!\n"); 
    return; 
  }
  stack[++top] = data; 
}

int pop()
{
  if(isEmpty())  { 
  //if(top == -1) {
    printf("stack underflow\n");   
    return -1;
  }
  return stack[top--]; 
  //top--;   (두 줄로 쓸거 한 줄로 정리) 
}
