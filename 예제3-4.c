#include <stdio.h>

int main(void)
{
	unsigned int a; // 부호 없는 정수형 변수 선언

	a = 4294967295;	
	printf("%d\n", a);	
	a = -1;
	printf("%u\n", a);

	return 0;

	//정수의 최댓값을 입력할때는 unsigned int 선언 + %u 출력
	//음수/양수 상관없이 큰 숫자를 사용할때는 long long 선언 + %lld 출력
	//*메모리 소모, 계산 소모가 크므로 꼭 필요한 경우에만 사용하기
}