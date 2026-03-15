#include <stdio.h>

int main(void)
{
	char fruit[20] = "strawberry"; //char형 '배열' fruit 선언 및 초기화

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam"); // 문자열 "jam"을 %s 포맷 지정자로 출력

	return 0;

}