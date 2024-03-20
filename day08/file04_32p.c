 1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <fcntl.h>
 4 #include <unistd.h>
 5 #define BUF_SIZE 100
 6 void error_handling(char* message);
 7
 8 int main()
 9 {
10    int fd;
11    char buf[BUF_SIZE];
12
13    fd = open("data.txt", O_RDONLY);
14    if( fd == -1)
15       error_handling("open() error!");
16    printf("file descriptor: %d \n", fd);
17
18    if(read(fd, buf, sizeof(buf))==-1)
19       error_handling("read() error!");
20    printf("file data: %s", buf);
21    close(fd);
22    return 0;
23 }
24
25 void error_handling(char* message)
26 {
27   fputs(message, stderr);
28   fputc('\n',stderr);
29   exit(1);
30 }
31
