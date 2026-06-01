#include <stdio.h>

int main(void) {
    char str[11];      // 10개의 문자를 저장하고 마지막에 '\0'을 넣기 위해 11칸 선언
    char *p;           // 배열을 포인터로 접근하기 위해 선언
    char *q;           // 중첩 반복문에서 비교할 때 사용할 포인터

    int count;         // 현재 문자의 등장 횟수 저장
    int maxCount = 0;  // 지금까지 확인한 최대 빈도수 저장
    char maxChar;      // 가장 많이 나온 문자 저장

    scanf("%10s", str);

    // 배열의 첫 번째 원소 주소부터 마지막 원소 주소까지 이동
    for (p = str; p < str + 10; p++) {

        count = 0;

        // 현재 문자가 몇 번 나오는지 확인하기 위해 전체 배열을 다시 검사
        for (q = str; q < str + 10; q++) {

            // 같은 문자를 찾으면 빈도수 증가
            if (*p == *q) {
                count++;
            }
        }

        // 더 큰 빈도수를 찾았을 때만 갱신
        // 빈도수가 같은 경우는 갱신하지 않아서 먼저 나온 문자가 유지됨
        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }

    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
