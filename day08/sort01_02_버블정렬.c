//함수로 구현하기

#include <stdio.h>

//이건 버블정렬
void arysort(int *ary, int size) {
    int i, j, temp = 0;
    for (i = 0; i < size -1; i++) {
        for (j = 0; j < size -1; j++) {
            if (ary[j] > ary[j + 1]) {
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}

int main() {
    int ary[] = {9, 4, 15};
    int size = sizeof(ary) / sizeof(ary[0]);     //전체/방한개 = (8*4byte)/(1*4byt>

    arysort(ary, size);

    printf("오름차순으로 정렬된 배열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ary[i]);
    }
}
