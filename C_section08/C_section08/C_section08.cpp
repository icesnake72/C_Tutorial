
#include <stdio.h>

void for_gugudan()
{
    for (int i = 2; i <= 9; i++)    // 단수
    {
        printf("%d단\n", i);
        for (int j = 1; j <= 9; j++)    // 곱수
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }
}

void for_gugudan2()
{
    for (int i = 2; i <= 9; i++)    // 단수
    {        
        for (int j = 1; j <= 9; j++)    // 곱수
        {
            printf("%d x %d = %d\t", i, j, i * j);
        }

        printf("\n");
    }
}

void for_gugudan3()
{
    for (int j = 1; j <= 9; j++)    // 곱수
    {
        for (int i = 2; i <= 9; i++)    // 단수
        {
            printf("%d x %d = %d\t", i, j, i * j);
        }

        printf("\n");
    }
}


void show_even()
{
    for (int i = 0; i < 100; i += 2)
    {
        printf("i = %d\n", i);
    }
}

void show_odd()
{
    for (int i = 99; i > 0; i -= 2)
    {
        printf("i = %d\n", i);
    }
}

void continue_loop()
{
    for (int i = 0; i < 100; i++)
    {
        if (!(i % 2))
            continue;   // 반복문의 헤드(머리) 부분으로 즉시 이동한다

        printf("i = %d\n", i);
    }
}


int main()
{    
    /*
    for 반복문 : 반복해야되는 횟수가 비교적 명확할때 사용한다!!!

    for(초기식; 조건문; 증감식)
    {
        // 실행문들...
    }

    초기식 : for 반복문을 진입하기전에 딱 한번만 실행되는 명령, 생략 가능!!!
    조건식 : for 반복문을 진입하기전에 반복하는 동안 매번 체크한다, 생략 가능!!!
    증감식 : for 반복문을 한번 실행하고 나서 매번 실행한다, 생략 가능!!!
    */
        
    /*
    for (int i=0; i<3; i++)
    {
        printf("i = %d\n", i);
    }

    int i = 0;
    while( i < 3 )
    { 
        printf("i = %d\n", i);
        i++;
    }
    */

    // for_gugudan3();
    /* show_even();
    show_odd();*/

    continue_loop();

    return 0;
}
