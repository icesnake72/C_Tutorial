#define _CRT_SECURE_NO_WARNINGS

#include <string.h>

#include "funcs.h"

// 함수(Function) : 어떤 소프트웨어적인 기능을 처리하는 최소 단위 (프로세스?)

// void 타입의 함수는 반환값이 없다(===> 나중에 모른다!!!)
// 
// 매개변수(Parameter(s), Argument(s))는 호출되는 시점에서 반드시 초기화가 되어야 한다.

// 매개변수들은 여러개를 선언할 수 있다
//void func2(int param1, long param2, double param3)
//{
//
//}


// param의 값이 홀수이면 1을 반환하고
// param의 값이 짝수이면 0을 반환한다

// 모든 함수들은 타입을 갖고 있으며, 반환값의 타입을 그 함수의 타입으로 본다
// 함수의 호출에 대하여 결과값을 반환할때는 return 이라는 키워드를 이용하여 반환한다.
// 함수를 실행하다가 return문을 만나면 그 함수의 처리는 그 즉시 종료된다
// void 함수에서의 return문은 그 함수를 그 즉시 종료한다는 의미로 사용된다

// 전역변수
int g_val = 0;


void add(int num)
{
    g_val += num;
}


int main()
{
    printf("숫자를 입력하세요 >>> ");


    int number;
    scanf("%d", &number);

    func1(number);  // func1을 호출할때 매개변수 int param의 값을 number의 값으로 초기화한다
    func2(10);

    number = 1;
    add(number);
    printf("%d\n", g_val);

    return 0;
}



