 1  /*
 2  파일 이름 : 이름.txt, data: 정보
 3  복사할 파일 이름: 이름copy.txt
 4  */
 5
 6  #include <stdio.h>
 7
 8  void main()
 9  {
10    char myInfo[30] = "ohhyejin,1014372";
11    char myInfoCopy[30];
12
13    //파일생성
14    FILE* origen;
15    origen = fopen("오혜진.txt", "w");
16    fprintf(origen, "%s", myInfo);
17
18
19    // 원본파일 데이터 읽기
20    origen = fopen("오혜진.txt", "r");
21    fscanf(origen, "%s", myInfoCopy);
22    fclose(origen);
23
24    FILE* copy;
25    copy = fopen("오혜진copy.txt", "w");
26    fprintf(copy, "%s", myInfoCopy);
27
28    fclose(copy);
29  }
30

