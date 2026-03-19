#define _CRT_SECURE_NO_WARNINGS	
//학점 입력 : A
//이름 입력 : 홍길동
//홍길동의 학점은 A입니다.
#include<stdio.h>

int main(void)
{
	char grade;
	char name[20];    //이름을 입력할 배열 char에서 많은 값을 입력시에는 크기를 지정

	printf("학점 입력:");
	scanf("%s", &grade);
	printf("이름 입력 :");
	scanf("%s", name);		//배열의 특별한 성질로 인하여 &를 사용X (이미 주소가 지정되어있기 때문)
	printf("%s의 학점은%s입니다\n", name, grade);

	return 0;


}