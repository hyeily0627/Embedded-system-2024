뭘해야하는지 정말 모르겠당
1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <fcntl.h>
 4 #include <unistd.h>
 5 void error_handling(char* message);
 6
 7
 8 int main()
 9 {
10    char name[20] = "오혜진\n";
11    char job[20] = "Student\n";
12    int age = 27;
13
14    fp = open("hyejin.txt", O_CREAT | O_WRONLY);
15
16    if(fp==-1)
17      error_handling("open() error!");
18      printf("file descriptor : %d \n", fp);
19
20    if(write(fp, buf, sizeof(buf))==-1)
21      error_handling("open() error!");
22      close(fp);
23      return 0;
24  }
25
26  void error_handling(char* message)
27  {
28    fputs(message, stderr);
29    fputc('\n',stderr);
30    exit(1);
31 }
32

