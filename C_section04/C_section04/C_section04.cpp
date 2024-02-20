#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
함수(Function)
C언어는 함수들로만 구성되어 있다.
C언어 프로그래밍은 함수로 시작해서 함수로 끝난다.

함수는 정의(Define)와 호출(Call)이 있다.
함수를 호출하기전에는 반드시 정의가 있어야 한다.
*/

void input_integer()
{
    int number; // 정수형 변수 선언

    printf("정수값을 입력하세요 >>> ");
    // scanf("형식문자", &변수);
    scanf("%d", &number); // 정수값을 입력받는다, 엔터키를 쳐야 입력이 완료된다.

    // 입력받은 내용을 그대로 출력하기
    printf("입력받은 값은 %d입니다\n", number);
}


void input_char()
{
    char sz;
    printf("문자를 입력하세요 >>> ");

    scanf("%c", &sz);   // 엔터키를 입력해야 입력이 완료된다

    printf("입력받은 문자값은 %c입니다", sz);
}

// float형 실수를 입력받는 함수
void input_float()
{
    float r;
    printf("실수를 입력하세요 >>>");

    scanf("%f", &r);

    printf("입력하신 실수값은 %.3f입니다", r);
}

// double형 실수를 입력받는 함수
void input_double()
{
    double r;   // float보다 변수의 크기가 두배 큼
    printf("실수를 입력하세요 >>>");

    // L(대문자)을 f앞에 붙여주어야 double형식의 실수값을 입력받을 수 있다
    scanf("%Lf", &r);

    printf("입력하신 실수값은 %.3f입니다", r);
}


int main()
{
    // input_integer();    // 함수의 호출

    // input_char();

    // 정수, 실수

    input_double(); // double형 데이터 입력
    input_float();  // float형 데이터 입력

    return 0;
}
