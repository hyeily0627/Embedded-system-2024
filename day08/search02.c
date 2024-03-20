
 1 // 이진탐색
 2
 3 #include <stdio.h>
 4
 5 void main()
 6 {
 7   int ary[] = { 3, 5, 2, 4, 9, 8, 1}
 8   int size = sizeof(ary) / sizeof(ary[0]);
 9   int first = 0;
10   int last = size;
11   int mid = 0;
12
13   while(first <=  last) {
14     middle = (first + last) / 2 ;
15     if(target == ary[middle])
16       printf("%d\n", ary[middle]);
17     else {
18         if(target > ary[middle]) first = middle + 1;
19         else last = middle -1;
20     }
21   }
22 }
23
