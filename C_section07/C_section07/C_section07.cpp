#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void while_loop()
{
    // while 반복문
    // while( 조건문 ) ===> 조건문의 결과가 참(1)인동안 반복수행된다.

    int i = 0;
    while (i < 10)  // ()안의 조건식의 결과가 1인동안 반복수행한다
    {
        printf("i=%d\n", i);
        ++i;    // i를 1씩 증가시킨다
    }

    // i가 10이 되었을때 조건이 거짓이므로 while문을 탈출한다.
    printf("while문 밖에서 i=%d\n", i);
}

void endless_while()
{
    // 무한 반복
    while (1)
    {
        printf("무한반복");
    }
}

void totaler()
{
    int total = 0;
    int i = 1;
    while (i <= 100)
    {
        total += i;
        ++i;
    }

    printf("1부터 100까지의 합은 %d입니다\n", total);
}

void even_totaler()
{
    int total = 0;
    int i = 1;
    while (i <= 100)
    {
        if ( !(i%2) )   // 변수==0 은 거짓인가? 하고 물어보는거하고 똑같다.
            total += i;

        ++i;
    }
    
    printf("1부터 100까지의 짝수들의 합은 %d입니다\n", total);
}

void multiple_value()
{
    // 1부터 100까지의 모든 수들중에 3의 배수들은 모두 출력하세요    
    int i = 1;
    while (i <= 100)
    {
        if (!(i % 3))   // 변수==0 은 거짓인가? 하고 물어보는거하고 똑같다.
            printf("%d\n", i);

        ++i;
    }
}

void dowhileloop1() 
{
    // while() {} : 반복조건을 반복 루프 블록 진입전에 체크한다
    // do ~ while() : 반복 조건을 반복 루프 블록 끝분에서 체크한다
    int i = 0;
    int total = 0;        

    do
    {
        // 일단 무조건 반복 루프 블록 진입
        i++;
        total += i;

    } while (i < 100);     // 반복 조건의 판단을 끝부분에서 체크한다, do~while();

    printf("1부터 100까지의 합은 %d입니다\n", total);
}


void dowhileloop2()
{
    int n;
    int total = 0;

    printf("입력받은 정수들의 모든 합을 구하기\n");

    do
    {
        printf("정수를 입력하세요 >>> ");
        scanf("%d", &n);

        printf("입력값은 %d이고, 지금까지의 합은 %d입니다\n", n, total += n);
        printf("프로그램을 종료하려면 0 을 입력하세요\n");


    } while ( n );  // 반복문의 탈출조건을 만든다,
}

void dowhileloop3()
{
    // do~while()문을 이용하여 1~100사이의 모든 홀수들의 합을 구하시오
    int total = 0;
    int i = 1;

    do
    {
        total += i;        
        printf("total = %d, i=%d\n", total, i);

        i += 2;

    } while (i < 100);
}


void dowhileloop4()
{
    // 구구단을 출력하세요
    int i = 2;  // 단수
    int j;  // 곱수

    // 중첩 while() 반복문을 이용한 구구단의 출력

    while (i <= 9)
    {
        j = 1;
        printf("%d단\n", i);
        while (j <= 9)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n");
        i++;
    }
}


void dowhileloop5()
{
    // do ~ while 반복문과 while 반복문을 중첩하기
    // 사용자로부터 2 ~ 9사이의 정수값을 입력받으세요
    // 받은 정수값을 단으로하여 구구단을 출력하고,
    // 사용자로부터 입력을 계속 유도하세요
    // 입력된 값이 2 ~ 9 사이의 값이 아니면 프로그램을 종료하세요

    int i;  // 단수
    int j;  // 곱수

    do
    {
        printf("단수를 입력하세요 >>> ");
        scanf("%d", &i);
        if (i > 9 || i < 2) // 입력받은 i값이 9보다 크거나, 2보다 작으면
            break;  // 현재 반복문을 탈출한다!!!

        printf("%d단\n", i);
        j = 1;
        while ( j <= 9 )
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

    } while ( 1 );
}

void draw_star()
{
    int i = 0;
    int j = 0;

    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n");

    i = 0;
    while (i < 5)
    {
        j = 0;
        while (j < i+1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n");

    i = 4;
    while (i >=0 )
    {
        j = 0;
        while (j < i + 1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
}




int main()
{
    
    // while, do~while(), for
    // multiple_value();
    // dowhileloop5();
    draw_star();

    return 0;
}