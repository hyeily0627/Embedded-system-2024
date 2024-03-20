1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <fcntl.h>
 4 #include <unistd.h>
 5 #define BUF_SIZE 100
 6 void error_handling(char* message);
 7
 8 int main()
 9 {
10   char msg[20];
11   FILE* fp;
12   if((fopen("test02.txt", "r")) == NULL);  {  // 이미 만들어진 파일 이름 넣은거임 
13     fprintf(stderr, "error/n");
14     exit(1);
15   }
16   fscanf(fp,"%s",msg);
17   printf("%s\n", msg);
18
19   fclose(fp);
20
21 }
22
// error출력됨ㅠ 원래는 test02.txt에 내용 떠야하는데..!
