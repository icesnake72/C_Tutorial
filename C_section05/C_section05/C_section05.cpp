#include <stdio.h>

void arithmatic_operation()
{
    // 연산자 
    // 산술연산자 : +, -, *, /, % (나머지)
    int num1, num2, num3;   // 초기화를 하지 않은 변수에 어떤값이 들어있을지 알 수 없다

    num1 = 10;
    num2 = 3;
    num3 = num1 + num2; // num1 + num2를 하여 num3에 대입
    printf("%d + %d = %d\n", num1, num2, num3);

    num3 = num1 - num2; // num1 - num2를 하여 num3에 대입
    printf("%d - %d = %d\n", num1, num2, num3);

    num3 = num1 * num2; // num1 * num2를 하여 num3에 대입
    printf("%d * %d = %d\n", num1, num2, num3);

    // 정수와 정수의 나누기 결과값은 정수이다(즉, 몫만 취함)
    num3 = num1 / num2; // num1 / num2를 하여 num3에 대입
    printf("%d / %d = %d\n", num1, num2, num3);

    // %(나머지)연산의 결과는 나누기를 수행한뒤 그 나머지 값을 취함
    num3 = num1 % num2; // num1 % num2를 하여 num3에 대입
    printf("%d %% %d = %d\n", num1, num2, num3);


    // 실수와 정수의 연산의 결과는 실수이다
    float fnum = 3.f;   // 3.0
    float fres;

    fres = num1 / fnum;
    printf("%d / %.2f = %.3f\n", num1, fnum, fres);

    num3 = num1 / fnum;
    printf("%d / %.2f = %d\n", num1, fnum, num3);

    // 정수와 정수의 연산할때
    // 큰 자료형으로 결과가 만들어진다.
    char n = 100;
    num1 = 100;
    printf("%d", num1 + n); // int + char의 결과는 int 이다


    // +, - 는 부호의 의미로 사용되는 경우도 있다
    num3 = -num1;   // num3 = -1 * num1;
    num3 = +num1;   // num3 = 1 * num1;
}


void alloc_op()
{
    int num1 = 10;  // = 
    int num2 = 3;
    int num3;

    // 대입 연산자 : 
    // = : 오른쪽의 값(rValue)을 왼쪽(lValue)에 대입한다
    // += : rValue와 lValue를 더한뒤 lValue에 대입한다
    num2 += num1;   // num2 = num2 + num1

    // -= : lValue에서 rValue를 뺀뒤 lValue에 대입한다
    num2 -= num1;   // num2 = num2 + num1

    num2 *= num1;   // num2 = num2 * num1
    num2 /= num1;   // num2 = num2 / num1
    num2 %= num1;   // num2 = num2 % num1
}

// 관계연산 또는 비교 연산
void compare_op()
{
    // 관계 연산자
    // <, <=, >, >=, ==, !=
    // 관계 연산자의 결과는 논리값(1, 0)이다

    int num1 = 10;
    int num2 = 5;
    int num3;

    // printf("%d", num3);
    num3 = num1 > num2; // num3에 1이 들어간다
    printf("%d\n", num3);

    num3 = num1 == num2;
    printf("%d\n", num3);

    num3 = num1 != num2;
    printf("%d\n", num3);
}

// 증감 연산자
void inc_dec_op()
{
    // ++ : 해당 변수의 값을 1씩 증가 시킨다.
    // -- : 해단 변수의 값을 1씩 감소 시킨다.

    int num1 = 0;
    ++num1;
    
    num1++;

    // 전위(Prefix) 증감 연산자의 사용
    // 같이 사용되는 명령문들보다 증감연산자가 먼저 사용된다
    printf("num1 = %d\n", ++num1);  // num1 = num1 + 1, num1 += 1
    printf("num1 = %d\n", --num1);  

    // 후위(Postfix) 증감 연산자의 사용
    // 같이 사용되는 명령문들보다 증감연산자가 나중에 사용된다
    printf("num1 = %d\n", num1++);  //num1의 값을 먼저 출력한뒤에 num1의 값을 증가시킨다
    printf("num1 = %d\n", num1--);  //num1의 값을 먼저 출력한뒤에 num1의 값을 감소시킨다

    // if (++num1 > 1)
    // if ( num1++ > 1)

    // 단순한 연산을 top - down 방식으로 나열

    // ((()+)*) 
    // / %, + - > < =
}


void logical_op()
{
    // +, 0, 1
    // &&(AND), ||(OR), !(NOT)

    // && (AND)
    // 1 && 1 = 1
    // 1 && 0 = 0
    // 0 && 1 = 0
    // 0 && 0 = 0

    // || (OR)
    // 1 || 1 = 1
    // 1 || 0 = 1
    // 0 || 1 = 1
    // 0 || 0 = 0

    // ! (NOT)
    // ! 1 = 0
    // ! 0 = 1

    // XOR (더하기)
    // 1 ^ 1 = 0
    // 1 ^ 0 = 1
    // 0 ^ 1 = 1
    // 0 ^ 0 = 0


    int num1 = 10;
    int num2 = 5;

    int num3 = (num1 > num2) && (num1 == num2);

    /*if (num3)
    if ((num1 > num2) && (num1 == num2))*/
}


int main()
{
    // arithmatic_operation();

    // compare_op();

    // inc_dec_op();

    // 삼항 연산자
    // int num = ( 조건식 ) ? 참일때 : 거짓일때;
        
    //int number;
    //scanf("%d", &number);   // 정수값을 입력받음
    //int ok = (number > 20) ? 1 : 0;     // number에 입력된 값이 20보다 크면 ok에 1이 대입, 아니면 0이 대입된다

    // 비트 연산자
    // & (AND), | (OR), ~ (NOT), ^ (XOR), << (왼쪽으로 비트 이동), >> (오른쪽으로 비트 이동)
    int num1 = 3;               //   0000 0011
    int num2 = 5;               // & 0000 0101
    int num3 = num1 & num2;     //   0000 0001
    printf("%d\n", num3);

    num1 = 3;               //   0000 0011
    num2 = 5;               // | 0000 0101
    num3 = num1 | num2;     //   0000 0111
    printf("%d\n", num3);

    num3 = ~num1;           // 0000 0011 ==> ~ 1111 1100 ==> 음수 표현할때 2의보수의 방법으로 저장
    printf("%d\n", num3);   // -4

    // shift 연산
    num3 = num1 << 2;   // num1의 값을 왼쪽으로 2비트 이동시킨다 0011 ==> 0000 1100
    printf("%d\n", num3);   
    num3 = num1 >> 2;   // num1의 값을 오른쪽으로 2비트 이동시킨다 0011 ==> 0000
    printf("%d\n", num3);

    //
    // 0 : 0000 0000
    // 1 : 0000 0001
    // 2 : 0000 0010
    // 3 : 0000 0011
    // 4 : 0000 0100
    // 5 : 0000 0101
    // 6 : 0000 0110
    // 7 : 0000 0111
    // 8 : 0000 1000


    return 0;
}
