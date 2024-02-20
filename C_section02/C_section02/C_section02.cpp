#include <stdio.h>

// Entry Point : 진입점, 프로그램 시작될때 무조건 제일 먼저 실행되는 함수
int main()  
{
    // 정수형 데이터 타입
    // 256 : 0 ~ 255, -128 ~ 127까지만 표현(정장) 가능
    char sz = 100;  // 1byte == 8bit == 1bit = 2^8 = 256개의 서로다른 데이터를 표현할 수 있다
    
    // 65536 : 0 ~ 65535, -32768 ~ 32767 
    short num = 500;    // 2^16개의 서로다른 데이터를 표현할 수 있다
    unsigned short num2; 
    // 2^32개
    int number;         // 2^32개의 서로다른 데이터를 표현할 수 있다
    long long_number;   // 2^32개의 서로다른 데이터를 표현할 수 있다
    long long llnumber = 1000000;   // 2^64개의 서로다른 데이터를 표현할 수 있다

    // 실수형 데이터 타입
    // 정밀도, 오차범위
    float pi = 3.14f;   // 4
    double dist = 42.195;   // 8
    long double r = pi * 123.123;

    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof short = %d\n", sizeof(short));
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof long = %d\n", sizeof(long));
    printf("sizeof long long = %d\n", sizeof(long long));
    printf("sizeof float = %d\n", sizeof(float));
    printf("sizeof double = %d\n", sizeof(double));
    printf("sizeof long double = %d\n", sizeof(long double));


    // 데이터 타입의 변환(Type Casting)
    num = (short)sz;    // (데이터 타입) : 형변환

    num = 32767;
    sz = (char)num;   // overflow : 데이터의 손실이 발생될 수 있다!!!
    printf("sz = %d\n", sz);

    // 실수 <--> 정수 : 형변환, Type Cast 연산자를 사용해야 한다
    pi = (float)num;
    num = (short)pi;

    // bool : 논리형, true, false
    bool isMan = true;
    printf("남자입니까? = %d\n", isMan);

    isMan = false;
    printf("남자입니까? = %d\n", isMan);

    // 논리형을 따질때 0이면 거짓, 0이 아니면 참


    return 0;   // 프로그램이 정상종료되었음을 나타낸다
}
