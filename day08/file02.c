
 1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <fcntl.h>
 4 #include <unistd.h>
 5
 6 void main()
 7 {
 8   char msg[] = "Linux Test!!\n";
 9   int fd;
10
11   fd = open("test02.txt", O_CREAT | O_WRONLY);
12   if(fd == -1)  {
13     printf("file open error!");
14     exit(1);
15   }
16   printf("file descriptor : %d\n", fd);
17
18   if(write(fd, msg, sizeof(msg)) == -1)
19   {
20     printf("file write error");
21   }
22   close(fd);
23 }
24
