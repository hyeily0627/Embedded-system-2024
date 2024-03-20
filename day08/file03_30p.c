 1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <fcntl.h>
 4 #include <unistd.h>
 5 void error_handling(char* message);
 6
 7 int main()
 8 {
 9   int fd;
10   char buf[]="Let's go!\n";
11
12   fd=open("data.txt",O_CREAT|O_WRONLY|O_TRUNC);
13   if(fd==-1)
14     error_handling("open() error!");
15   printf("file descriptor : %d \n", fd);
16
17   if(write(fd, buf, sizeof(buf))==-1)
18     error_handling("open() error!");
19   close(fd);
20   return 0;
21 }
22
23 void error_handling(char* message)
24 {
25   fputs(message, stderr);
26   fputc('\n',stderr);
27   exit(1);
28 }
29
