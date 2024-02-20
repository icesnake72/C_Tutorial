
// 함수 (Function)
// C언어는 함수들로 구성되어 있다.
// C언어는 main()이라고 하는 약속된 함수가 있으며
// main()함수에서 시작해서 main()함수에서 끝이난다.

// 한줄 주석

/*
멀티라인 주석
여기에다가 여러줄의 주석을 달 수 있습니다.
여려줄 달 수 있어요
...
...
*/

/*
C : class 지원하지 않는다. 객체지향형 프로그래밍을 지원하지 않는다.

C++ : class를 지원한다. 완벽하게 객체지향형 프로그래밍을 지원한다.
.cpp
*/

// stdio.h : 스탠다드 io(입.출력) 함수들을 정의하고 있는 헤더 파일
#include <stdio.h>

int main()
{
	printf("Hello C\n");	// c언어에서 문자열의 표현은 ""를 사용한다.

	// c언어에서의 데이터 타입
	// 데이터타입 변수명;
	// 데이터 타입의 종류
	// 
	// 정수형 : char(1byte), short(2byte), int(4byte), long(4byte), long long (8byte)
	// 양의 정수만 표현하고 싶을때 정수형 타입앞에 unsigned를 붙여주면 무조건 양의 정수만 저장할 수 있다.
	// 실수형 : float, double, long double

	// 
	int number;	// 정수형 int타입으로 number라는 이름의 변수를 선언한것이다.
	number = 10;
	number = 20;
	number = 0;
	number = -100;
	
	char number2 = 10;
	number2 = 20;
	number2 = -100;

	// number = 0.1; 정수형 실수 데이터를 담을수 없다

	printf("unsigned char형의 데이터 사이즈 : %d\n", sizeof(unsigned char));

	printf("long형의 사이즈 : %d\n", sizeof(long));
	printf("long long형의 사이즈 : %d\n", sizeof(long long));
	printf("float형의 사이즈 : %d\n", sizeof(float));
	printf("double형의 사이즈 : %d\n", sizeof(double));
	printf("long double형의 사이즈 : %d\n", sizeof(long double));



	return 0;	// main()함수에서 0을 반환하는것은 프로그램을 정상 종료한다는 뜻이다
}