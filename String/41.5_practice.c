// 다음 소스 코드를 완성하여 0이 출력되게 만드세요.

#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "Pachelbel Canon";
	char* s2 = "Pachelbel Canon";

	int ret = strcmp(s1, s2);

	printf("%d", ret);

	return 0;
}