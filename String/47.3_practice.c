/*
정수 회문이란 앞 뒤가 같은 수를 의미합니다.
예) 121, 353, 11211 등.
다음 소스 코드를 완성하여 입력된 정수가 회문인지 판별하세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    long long num1;
    char text[30];

    printf("정수를 입력하세요: ");
    scanf("%lld", &num1);

    sprintf(text, "%lld", num1);

    int length;
    bool isPalindrome = true;

    length = strlen(text);

    int begin = 0;
    int end = length - 1;
    while (begin < end)
    {
        if (text[begin] != text[end])
        {
            isPalindrome = false;
            break;
        }
        begin++;
        end--;
    }

    printf("%d\n", isPalindrome);

    return 0;
}