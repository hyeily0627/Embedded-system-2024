#include <stdio.h>

void main()
{ // 오름차순으로 정렬 해보기
  int ary[] = {9, 4, 15};
  int size = sizeof(ary) / sizeof(ary[0]);
  int i, j, temp = 0;

  for(int i = 0; i < size-1 ; i++) {
      for(int j = 0; j < size-1 ; j++)  {
          if (ary[j] > ary[j + 1])  {
              temp = ary[j];
              ary[j] = ary[j + 1];
              ary[j + 1] = temp;
          }
      }
  }

  printf("오름차순으로 정렬된 배열: ");
  for (int i = 0; i < size; i++) {
       printf("%d ", ary[i]);
      }

}

