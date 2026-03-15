#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft); // float형 변수는 소수점 이하 6자리 정도까지 정확하게 표현
	printf("double형 변수의 값 : %.20lf\n", db); // double형 변수는 소수점 이하 15자리 정도까지 정확하게 표현

	return 0;

	//컴퓨터에서 실수 표현은 오차가 발생할 수 있음 자료형에 따라 유효 숫자 범위 내에서 사용해야 한다.
}