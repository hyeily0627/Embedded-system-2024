//연결리스트로 구현하기 
#include <stdio.h>
#define STACK_SZ 10

typedef struct STACK {
    int buf[STACK_SZ];
    int top;
} stack;


void push(stack*, int);
void pop(stack*);
int isEmpty(stack*);


void main()
{

    stack s;
    s.top = -1;

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);

}

int isEmpty(stack* pstk)
{
    return pstk->top == -1;
}


void push(stack* pstk, int value)
{
    if(pstk->top == STACK_SZ -1) {
        printf("stack overflow !!\n");
        return ;
    }
    pstk->buf[++(pstk->top)] = value; // 스택 제일 위에 데이터 추가
}

void pop(stack* pstk) {
    if(isEmpty(pstk)) { // 스택이 비어 있는지 확인
        printf("stack underflow\n"); // 스택이 비어 있으면 언더플로우 메시지 출력
        return;
    }
    printf("%d\n", pstk->buf[(pstk->top)--]); // 스택의 가장 위에서 데이터 제거하고 출력
}
