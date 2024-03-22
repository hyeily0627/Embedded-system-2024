#include <stdio.h>
 2 #include <stdlib.h>
 3 #include <fcntl.h>
 4 #include <unistd.h>
 5 #include <string.h>
 6
 7 #define BUF_SIZE 100
 8
 9 void error_handling(char* message);
10
11 int main() {
12     int fd;
13     char buf[BUF_SIZE];
14     char id[BUF_SIZE], pass[BUF_SIZE];
15     //char str[] = "OHHYEJIN";
16
17     printf("---------개인정보 접근---------\n");
18     printf("아이디를 입력하세요 : ");
19     scanf("%s", id);
20     printf("비밀번호를 입력하세요 : " );
21     scanf("%s", pass);
22
23     if (strcmp(id, "a") == 0) {
24         if (strcmp(pass, "b") == 0) {
25             fd = open("myinfo.txt", O_RDONLY);
26             if (fd == -1) {
27                 error_handling("open() error!");
28             }
29
30             if (read(fd, buf, sizeof(buf)) == -1) {
31                 error_handling("read() error");
32             }
33             printf("%s", buf);
34             close(fd);
35         } else {
36             printf("비밀번호가 틀렸습니다\n");
37         }
38     } else {
39         printf("입력된 id가 존재하지 않습니다\n");
40         return 1;
41     }
42
43     return 0;
44 }
45
46 void error_handling(char *message) {
47     fputs(message, stderr);
48     fputc('\n', stderr);
49     exit(1);
50 }
51
