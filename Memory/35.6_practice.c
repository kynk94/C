//다음 소스 코드를 완성하여 2147483647 9223372036854775807이 출력되게 만드세요.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
	int* numPtr1 = malloc(sizeof(int));
	long long* numPtr2 = malloc(sizeof(long long));

	*numPtr1 = INT_MAX;
	*numPtr2 = LLONG_MAX;

	printf("%d %lld\n", *numPtr1, *numPtr2);

	free(numPtr1);
	free(numPtr2);

	return 0;
}