#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
    // c언어에서 가장 기본적인 출력 함수
    printf("출력하고자 하는 문자열\n");
    printf("출력하고자 하는 문자열\t");
    printf("탭만큼 건너뜀\b");
    printf("한줄 건너뜀\n");
    printf("첫번째 문자열\r");
    printf("두번째 \\문자열\n");

    // 출력에 관련된 제어 문자들
    // \n : 개행, 다음줄(New Line)
    // \t : 탭(tab)만큼 건너뛴다
    // \b : 백스페이스 기능
    // \r : 윈도우 os에서는 커서를 첫번째 칸으로 이동시킨다.
    // \a
    // \' : 작은 따옴표를 표현(인용부호)
    // \" : 큰 따옴표를 표현(인용부호)
    // \\ : 역슬래쉬를 표현

    unsigned int age = 18;
    float dist = 42.195f;

    // 문자열의 보간 : 문자열 사이에 데이터를 삽입

    printf("나의 나이는 %u 살입니다.\n", age);
    printf("마라톤의 거리는 %f 입니다\n", dist);
    printf("내 나이 %d, 마라톤 거리 %f\n", age, dist);

    int red = 255;
    // 형식 문자들의 종류
    // %d : 정수를 표현
    // %u : 양의 정수
    // %o, %x : 8진수, 16진수
    printf("red = %o, red = %x\n", red, red);
    // %f : 실수, 1.23
    // %e : 지수의 방법으로 표현, 숫자가 너무 크거나 너무 작을때 10e+100
    // %g : 숫자를 봐서 컴퓨터가 알아서 %f 또는 %e으로 표현
    // %c : 문자 한개를 표현
    char sz = 65;    
    printf("sz = %d = %c\n", sz, sz);
    sz = sz + 1;
    sz = 'C';   // 숫자 67 대입하는것과 같은 상황
    printf("sz = %d = %c\n", sz, sz);
    // %s : 문자열 보간한다
    printf("%s\n%s\n", "이것은 문자열입니다", "두번째 문자열");
    // %p : xxxxxx
    // %% : %를 표현하기 위해 사용

    // %5d : 다섯칸을 확보한뒤 오른쪽 정렬해서 출력
    printf("%5d\t%5d\t%5d\n", 10, 20, 30);

    // %-5d : 다섯칸을 확보한뒤 왼쪽 정렬해서 출력
    printf("%5d\t%5d\t%5d\n", 10, 20, 30);

    float pi = 3.14f;
    // %6.2f : 실수를 표현하는데, 소숫점포함해서 6자리를 확보하고, 소숫점 이하를 2자리로 표현
    // __3.14
    printf("pi = %6.2f\n", pi); // 오른쪽 정렬
    printf("pi = %-6.2f\n", pi); // 왼쪽 정렬
    printf("pi = %.2f\n", pi); // 정수부는 그대로 출력되고, 소숫점이하만 2자리로 제한

    // 표준 입력 함수
    scanf("%d", &age);  // 키보드로부터 정수를 입력받아서 age에 대입
    scanf("%f", &dist); // 키보드로부터 실수를 입력받아서 dist에 대입
    









    return 0;
}
