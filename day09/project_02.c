 #include <stdio.h>
  2 #include <stdlib.h>
  3 #include <string.h>
  4
  5 // 책 구조체 만들기
  6 typedef struct Book {
  7     char ISBN[100];
  8     char author[100];
  9     char title[100];
 10     int price;
 11     struct Book *next;
 12 }Book;
 13
 14 // 책구조체 헤드 선언
 15 typedef struct {
 16   Book *head;
 17 } Head;
 18
 19 Head head;
 20
 21 // 도서등록
 22 void addBook()
 23 {
 24   Book *newBook = (Book*)malloc(sizeof(Book));
 25   if(newBook == NULL) {
 26     printf("메모리 할당 실패 !\n");
 27     return;
 28 }
 29     printf("도서의 ISBN을 입력하세요: ");
 30     scanf("%s", newBook->ISBN);
 31     printf("도서의 저자를 입력하세요: ");
 32     scanf("%s", newBook->author);
 33     printf("도서의 제목을 입력하세요(공백제외): ");
 34     scanf("%s", newBook->title);
 35     printf("도서의 가격을 입력하세요: ");
 36     scanf("%d", &newBook->price);

 38     newBook->next = NULL;
 39
 40     if (head.head == NULL) {
 41         head.head = newBook;
 42     } else {
 43         Book *temp = head.head;
 44         while (temp->next != NULL) {
 45             temp = temp->next;
 46         }
 47         temp->next = newBook;
 48     }
 49 }
 50
 51 // 도서검색
 52 void searchBook() {
 53   char searchISBN[100];
 54   printf("검색할 도서의 ISBN을 입력하세요: ");
 55   scanf("%s", searchISBN);
 56
 57   Book *temp = head.head;
 58     while (temp != NULL) {
 59         if (strcmp(temp->ISBN, searchISBN) == 0) {
 60             printf("도서를 찾았습니다!\n");
 61             return;
 62         }
 63         temp = temp->next;
 64     }
 65
 66     printf("해당 ISBN으로 도서를 찾을 수 없습니다.\n");
 67 }
 68
 69 // 도서삭제
 70 void deleteBook() {
 71     char delISBN[100];
 72     printf("삭제할 도서의 ISBN을 입력하세요: ");
 73     scanf("%s", delISBN);
 74
 75     Book *current = head.head;
 76     Book *prev = NULL;
 77
 78     while (current != NULL) {
 79         if (strcmp(current->ISBN, delISBN) == 0) {
 80             if (prev == NULL) {
 81                 head.head = current->next;
 82             } else {
 83                 prev->next = current->next;
 84             }
 85             free(current);
 86             printf("도서가 삭제되었습니다.\n");
 87             return;
 88         }
 89         prev = current;
 90         current = current->next;
 91     }
 92     printf("해당 ISBN으로 도서를 찾을 수 없습니다.\n");
 93 }
 94 // 도서출력
 95 void printBooks() {
 96     if (head.head == NULL) {
 97         printf("등록된 도서가 없습니다.\n");
 98         return;
 99     }
100
101     Book *temp = head.head;
102     printf("<< 등록된 도서 리스트 >> \n\n");
103     while (temp != NULL) {
104         printf("도서 제목: %s\n", temp->title);
105         printf("저자: %s\n", temp->author);
106         printf("ISBN: %s\n", temp->ISBN);
107         printf("가격: %d\n\n", temp->price);
108         temp = temp->next;
109     }
110 }
111
112 // 메인함수
113 int main()
114 {
115   int pick;
116
117   // 헤드 초기화 해주기
118   head.head = NULL;
119
120   // 메뉴 출력
121   while(1)
122   {
123   printf("***** 상품 관리 프로그램을 작동합니다 *****\n");
124   printf("1. 도서 등록\n");
125   printf("2. 도서 검색\n");
126   printf("3. 도서 삭제\n");
127   printf("4. 도서 출력\n");
128   printf("0. 종료\n\n");
129
130   printf("메뉴를 선택하세요(*숫자만 입력) : ");
131   scanf("%d",&pick);
132
133   if(pick == 1)
134     addBook();
135   else if(pick == 2)
136     searchBook();
137   else if(pick == 3)
138     deleteBook();
139   else if(pick == 4)
140     printBooks();
141   else if(pick == 0)
142     {
143       printf("***** 상품 관리 프로그램을 종료합니다 *****\n");
144       return 0;
145     }
146   else
147     printf("잘못된 입력입니다. 다시 선택해주세요!\n");
148   }
149   return 0;
150 }
