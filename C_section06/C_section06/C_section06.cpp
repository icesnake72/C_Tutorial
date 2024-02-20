#include <stdio.h>

int main()
{
    // if 조건문
    /*
    * 
    if ( 조건식 )
        참일때 수행되는 코드 블럭

    else
        거짓일때 수행되는 코드 블럭

    */

    int number = 18;
    if (number > 18)
        printf("당신은 성인입니다\n");

    if (number > 18)
        printf("당신은 성인입니다\n");
    // else 구문은 if문에서 옵션이다, 반드시 있어야 할 필요는 없다!!!
    else
        printf("당신은 성인이 아닙니다\n");


    if (number > 18)
    {
        printf("당신은 성인입니다\n");
        printf("당신은 편의점에서 술을 살 수 있습니다\n");
    }
    else
    {
        printf("당신은 성인이 아닙니다\n");
        printf("술은 더 큰다음에 사세요\n");
    }

    // 
    int female = 4;   // 
    if ( number > 18 && female )
    {
        printf("당신은 성인입니다.");
        printf("당신은 여성입니다.");
    }
    else if (number <= 18 && female)
    {
        printf("당신은 성인이 아니고,");
        printf("당신은 여성입니다.");
    }
    else
    {        
        printf("당신은 여성은 아닙니다.");
    }
        

    // switch ~ case 구문
    char sz = 'a';
    switch (sz)
    {
    case 'a':   // sz == 'a'
        printf("당신은 a학점 입니다.\n");
        break;

    case 'b':   // sz == 'b'
        printf("당신은 b학점 입니다.\n");
        break;

    case 'c':   // sz == 'c'
        printf("당신은 c학점 입니다.\n");
        break;

    case 'd':
        printf("당신은 d학점 입니다.\n");
        break;

    default:    // default구문은 일반적으로 switch ~ case 가장 뒤에 위치한다
        printf("당신은 f학점입니다\n");
    }

    // 
    int num1 = 10;
    int num2 = 5;
    int num3 = 7;

    //scanf("%d", &num1);
    //scanf("%d", &num2);
    //scanf("%d", &num3);

    /*
    num1과 num2를 비교해본다
    num1과 num3을 비교해본다        
    */
    if (num1 > num2 && num1 > num3)
        printf("가장 큰수는 %d입니다", num1);
    
    else if (num2 > num1 && num2 > num3)
        printf("가장 큰수는 %d입니다", num2);

    else if (num3 > num1 && num3 > num2)
        printf("가장 큰수는 %d입니다", num3);

    // 가장 큰 수는 10 입니다.

    int max_value = num1;
    if (max_value < num2)
        max_value = num2;

    if (max_value < num3)
        max_value = num3;




    return 0;
}