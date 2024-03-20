 1 #include <stdio.h>
 2 #include <stdlib.h>
 3
 4 void main()
 5 {
 6   char name[20] = "오혜진\n";
 7   char job[20] = "Student\n";
 8   int age = 27;
 9
10   FILE* fp ;                     // 파일 포인터
11
12   fp = fopen("info.txt", "w");   //텍스트 파일을 여는데 write할 목적>
13
14   if(fp == NULL)  {
15     fprintf(stderr, "Error");    // 파일입출력에서 쓰는 fprintf 함수
16     exit(0);
17   }
18  fprintf(fp, "%s", name);
19  printf("%s", name);
20
21  fprintf(fp, "%s", job);
22  printf("%s", job);
23
24  fprintf(fp, "%d", age);
25  printf("%d\n", age);
26
27
28  fclose(fp);


// 현재파일을 컴파일 하면 info.txt 파일이 생성되고, 해당 파일을 들어가면 출력값이 나와있음
