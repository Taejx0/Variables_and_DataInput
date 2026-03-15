#include <stdio.h>

int main(void)
{
	
	int a;	// 변수 선언
	int b, c;	// 여러 개의 변수를 한 줄에 선언
	double da;	// 실수형 변수 선언
	char ch;	// 문자형 변수 선언

	a = 10;		
	b = a;
	c = a + 20;		
	da = 3.5;		
	ch = 'a';		

	printf("변수 a의 값 : %d\n", a);	
	printf("변수 b의 값 : %d\n", b);
 	printf("변수 c의 값 : %d\n", c);
 	printf("변수 da의 값 : %.1lf\n", da);
 	printf("변수 ch의 값 : %c\n", ch);

	return 0;

}