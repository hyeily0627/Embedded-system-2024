// 선형탐색 함수구현
 2 #include <stdio.h>
 3
 4 int lSearch(int *ary, int size, int find) {
 5   for(int i = 0; i < size; i++)  {
 6       if(ary[i] == find) {
 7         return i;
 8       }
 9   }
10   return -1;
11 }
12
13 void main()
14 {
15   int ary[] = {3, 5, 2, 4, 9, 8, 1};
16   int ridx;
17   int size = sizeof(ary) / sizeof(ary[0]);
18
19   ridx = lSearch(ary, size, 5);
20
21   if(ridx == -1)
22      printf("찾는 원소가 없습니다.\n");
23   else
24      printf("찾은 인덱스 :%d\n", ridx);
25 }
26
