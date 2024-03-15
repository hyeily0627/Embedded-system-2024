#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* next;
} node;

typedef struct {
    node* head;
} headNode;

headNode* c_Head(void) {
    headNode* head = (headNode*)malloc(sizeof(headNode));
    head->head = (node*)malloc(sizeof(node));
    head->head->data = 0; // 더미 노드에 데이터 할당
    head->head->next = NULL;
    return head;
}

void pre_addNode(node* pnode, int _data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = _data;
    newNode->next = pnode->next;
    pnode->next = newNode;
}

void rear_addNode(node* pnode, int _data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = _data;
    newNode->next = NULL;
    while (pnode->next != NULL) {
        pnode = pnode->next;
    }
    pnode->next = newNode;
}
}

void showNode(node* pnode) {
    while (pnode->next != NULL) {
        printf("현재값 = %d\n", pnode->next->data);
        pnode = pnode->next;
    }
}

void allFreeNode(node* pnode) {
    node* curr = pnode;
    node* next;

    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }
    pnode = NULL;
}

void main() {
    headNode* head = c_Head();

    pre_addNode(head->head, 10);
    pre_addNode(head->head, 20);
    pre_addNode(head->head, 30);
    pre_addNode(head->head, 40);
    showNode(head->head);

    allFreeNode(head->head);
}
