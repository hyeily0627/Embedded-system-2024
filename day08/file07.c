
 1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <string.h>
 4 #include <unistd.h>
 5 #include <fcntl.h>
 6
 7 void main()
 8 {
 9   int fd1, fd2;
10   char str[] = "wonderful day!";
11   char buf[1024];
12
13   fd1= open("mytest.txt", O_CREAT | O_RDWR | O_TRUNC, 0600);
14   if(fd1 < 0) printf("Open Error");
15   if(write(fd1, str, strlen(str)) < 0 ) printf("Write Error");
16   close(fd1);
17
18   fd1 = open("mytest.txt", O_RDONLY);
19   if(read(fd1, buf, 1024 ) < 0 ) printf("Read Error");
20
21   printf("%s\n", buf);
22
23   fd2 = open("mytest_copy.txt", O_CREAT | O_RDWR | O_TRUNC, 0600);
24   if(fd2 < 0) printf("Open Error");
25   if(write(fd2, buf, strlen(buf)) < 0 ) printf("Write Error");
26
27   close(fd1);
28   close(fd2);
29 }
30
