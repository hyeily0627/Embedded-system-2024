#include <stdio.h>

int binarySearch(int ary[], int size, int target) {
    int first = 0;
    int last = size - 1;
    int middle;

    while (first <= last) {
        middle = (first + last) / 2;

        if (ary[middle] == target)
            return middle; // 찾은 원소의 인덱스 반환
        else if (ary[middle] < target)
            first = middle + 1; // 오른쪽 절반에서 탐색
        else
            last = middle - 1; // 왼쪽 절반에서 탐색
    }

    return -1; // 원소를 찾지 못한 경우
}

int main() {
    int ary[] = {1, 2, 3, 4, 5, 8, 9}; // 오름차순으로 정렬된 배열
    int size = sizeof(ary) / sizeof(ary[0]); // 배열의 크기 계산
    int target = 8; // 찾고자 하는 요소

    // 이진 탐색 함수 호출
    int result = binarySearch(ary, size, target);

    // 결과 출력
    if (result == -1)
        printf("찾는 원소가 없습니다.\n");
    else
        printf("찾은 인덱스: %d\n", result);

    return 0;
}

