#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 책 구조체 정의
typedef struct Book {
    char ISBN[100];
    char author[100];
    char title[100];
    int price;
    struct Book *next;
} Book;

// 책 구조체 헤드 정의
typedef struct {
    Book *head;
} Head;

Head head;

// 도서 등록 함수
void addBook() {
    Book *newBook = (Book*)malloc(sizeof(Book)); // 새로운 책을 위한 메모리 할당
    if(newBook == NULL) {
        printf("메모리 할당 실패 !\n"); // 메모리 할당 실패 시 에러 메시지 출력
        return;
    }
    printf("도서의 ISBN을 입력하세요: ");
    scanf("%s", newBook->ISBN); // ISBN 입력 받음
    printf("도서의 저자를 입력하세요: ");
    scanf("%s", newBook->author); // 저자 입력 받음
    printf("도서의 제목을 입력하세요(공백제외): ");
    scanf("%s", newBook->title); // 제목 입력 받음
    printf("도서의 가격을 입력하세요: ");
    scanf("%d", &newBook->price); // 가격 입력 받음

    newBook->next = NULL; // 새 책의 다음 포인터를 NULL로 설정하여 리스트의 끝을 표시

    // 헤드가 비어있는 경우 새 책을 헤드로 설정, 그렇지 않으면 리스트 끝에 새 책을 연결
    if (head.head == NULL) {
        head.head = newBook;
    } else {
        Book *temp = head.head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newBook;
    }
}

// 도서 검색 함수
void searchBook() {
    char searchISBN[100];
    printf("검색할 도서의 ISBN을 입력하세요: ");
    scanf("%s", searchISBN); // 검색할 ISBN 입력 받음

    Book *temp = head.head;
    while (temp != NULL) {
        if (strcmp(temp->ISBN, searchISBN) == 0) { // ISBN이 일치하는 책을 찾으면 메시지 출력
            printf("도서를 찾았습니다!\n");
            return;
        }
        temp = temp->next;
    }

    printf("해당 ISBN으로 도서를 찾을 수 없습니다.\n"); // 책을 찾지 못한 경우 메시지 출력
}

// 도서 삭제 함수
void deleteBook() {
    char delISBN[100];
    printf("삭제할 도서의 ISBN을 입력하세요: ");
    scanf("%s", delISBN); // 삭제할 ISBN 입력 받음

    Book *current = head.head;
    Book *prev = NULL;

    // 현재 책의 ISBN이 입력한 ISBN과 일치하는 경우 해당 책을 삭제
    while (current != NULL) {
        if (strcmp(current->ISBN, delISBN) == 0) {
            if (prev == NULL) {
                head.head = current->next; // 헤드를 변경하여 첫 번째 책을 삭제하는 경우
            } else {
                prev->next = current->next; // 이전 책의 다음 포인터를 변경하여 중간에 책을 삭제하는 경우
            }
            free(current); // 현재 책의 메모리 해제
            printf("도서가 삭제되었습니다.\n");
            return;
        }
        prev = current;
        current = current->next;
    }

    printf("해당 ISBN으로 도서를 찾을 수 없습니다.\n"); // 책을 찾지 못한 경우 메시지 출력
}

// 도서 출력 함수
void printBooks() {
    if (head.head == NULL) {
        printf("등록된 도서가 없습니다.\n");
        return;
    }

    Book *temp = head.head;
    printf("<< 등록된 도서 리스트 >> \n\n");
    while (temp != NULL) {
        printf("도서 제목: %s\n", temp->title);
        printf("저자: %s\n", temp->author);
        printf("ISBN: %s\n", temp->ISBN);
        printf("가격: %d\n\n", temp->price);
        temp = temp->next;
    }
}

// 도서 목록 메모리 해제 함수
void freeBooks() {
    Book *current = head.head;
    Book *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    head.head = NULL; // 헤드를 NULL로 설정하여 리스트 초기화
}

// 메인 함수
int main() {
    int pick;

    // 헤드 초기화
    head.head = NULL;

    // 메뉴 출력 및 선택
    while(1) {
        printf("***** 상품 관리 프로그램을 작동합니다 *****\n");
        printf("1. 도서 등록\n");
        printf("2. 도서 검색\n");
        printf("3. 도서 삭제\n");
        printf("4. 도서 출력\n");
        printf("0. 종료\n\n");

        printf("메뉴를 선택하세요(*숫자만 입력) : ");
        scanf("%d", &pick);

        // 선택된 메뉴에 따라 해당 함수 호출
        if(pick == 1)
            addBook();
        else if(pick == 2)
            searchBook();
        else if(pick == 3)
            deleteBook();
        else if(pick == 4)
            printBooks();
        else if(pick == 0) {
            printf("***** 상품 관리 프로그램을 종료합니다 *****\n");
            return 0;
        } else {
            printf("잘못된 입력입니다. 다시 선택해주세요!\n");
        }
    }

    return 0;
}
