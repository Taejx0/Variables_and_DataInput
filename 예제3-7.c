#define _CRT_SECURE_NO_WARNINGS		// Visual Studio에서 strcpy() 함수 사용 시 발생하는 보안 경고를 무시하기 위한 매크로 정의

#include <stdio.h>
#include <string.h>		// 문자열 처리 함수인 strcpy()를 사용하기 위해 string.h 헤더 파일 포

int main(void)
{
	char fruit[20] = "strawberry";		// char형 '배열' fruit 선언 및 초기

	printf("%s\n", fruit);
	strcpy(fruit, "banana");		// 문자열 "banana"를 fruit 배열에 복사하여 저장
	printf("%s\n", fruit);

	return 0;
}