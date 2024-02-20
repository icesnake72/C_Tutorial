#include "funcs.h"

extern int g_val;


// func1 함수의 정의(구현)
// 반환값이 없는 함수, 매개변수가 있는 함수
// 매개변수를 받아서 여기서 결과를 출력하는 함수들...
void func1(int param)   // param = number;
{
    // return;
    // 매개변수 : 함수의 호출에 의해 초기화되어지는 지역 변수이다.


    if (param % 2)
        printf("number = %d, 는 홀수 입니다\n", param);
    else
        printf("number = %d, 는 짝수 입니다\n", param);
}


// 함수의 정의는 반드시 함수의 호출보다 이전에 있어야 한다
int func2(int param)    // 함수를 정의한다(Define a function)
{
    return param % 2;
}

// 함수의 4가지 형태
// 반환값이 있는 함수, 매개변수가 있는 함수
// 반환값이 있는 함수, 매개변수가 없는 함수
// 
// 반환값이 없는 함수, 매개변수가 있는 함수
// 반환값이 없는 함수, 매개변수가 없는 함수



// 반환값이 없는 함수, 매개변수가 없는 함수
void func3()    // 소비형 함수
{
    printf("타이틀\n");
    printf("일반적으로 어떤 특정 내용을 출력하는 함수들\n");
}


// 매개변수는 없고 반환값만 있는 함수
double getPi()
{
    return 3.14;    // 정해져 있는 값 반환하는 함수
}


int func4(int param1)   // 값을 받음
{
    static int s_num = 0;   // 정적변수, 전역변수의 성격을 갖고 있는 지역변수

    int number = 0; // func4()함수의 지역 변수

    g_val = 10;
    

    // 지역변수 : 지역(Local, 코드블럭)
    for (int i = 0; i < 10; i++)
    {
        // int i는 func4()함수의 for문의 지역변수
        number += i;
    }

    // i = 10; 
    
    {
        number = 0;
        int i;
    }

    if (param1 > 0)
    {
        int i;
    }
    else
    {
        int i = 0;
    }

    s_num = number;

    return number;      // number에 있는 값을 반환
}


