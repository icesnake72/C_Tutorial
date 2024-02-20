#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  // 표준 입출력 함수들이 정의되어 있는 헤더 파일
#include <string.h> // 문자열 관련 함수들이 정의되어 있는 헤더 파일

void set_even()
{
    short arr[5] = {0}; // 0 ~ 4, 2,4,6,8,10
    
    // 2,4,6,8,10을 for문을 이용하여 대입하기
    for (int i = 2, j=0; i <= 10; i+=2,j++) 
    {
        // for문 반복시 : j = 0,1,2,3,4, i = 2,4,6,8,10
        arr[j] = i;
    }

    // arr의 모든 요소들을 출력하기
    for (int i = 0; i < 5; i++)
    {
        printf("arr의 %d번째 요소 : %d\n", i, arr[i]);
    }    
}


void array_count()
{
    int arr[10] = { 0 };

    // 배열의 요소들의 갯수 구하기 공식
        
    printf("int 타입의 크기 : %llu\n", sizeof(int));

    printf("arr 배열의 크기 : %llu\n", sizeof(arr));
    // arr 배열의 크기 = sizeof(int) * arr 배열의 갯수

    // 배열의 갯수 = sizeof(배열) / sizeof(배열의 타입)
    int count = sizeof(arr) / sizeof(int);
    for (int i = 0; i < count; i++)
    {
        arr[i] = i+1;
    }

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
}

//
void array_string()
{
    // string(문자열)

    // 아스키 코드
    // 정수, 실수, 어드레스(주소) 
    char ch1 = 65;
    char ch2 = 'A';

    if (ch1 == ch2)
        printf("ch1과 ch2는 같습니다\n");
    else
        printf("ch1과 ch2는 다릅니다\n");

    printf("%d\n", ch1);
    printf("%d\n", ch2);

    printf("%c\n", ch1);
    printf("%c\n", ch2);

    char sz[5] = { 65, 66, 67, 68, 69 };    // 배열
    for (int i = 0; i < 5; i++)
    {
        printf("%c", sz[i]);
    }

    printf("\n");

    char sz2[5] = { 65, 66, 67, 68, 0 };    // 문자열

    // %s로 출력할때 완벽하게 출력되는 변수 ===> 문자열
    printf("%s", sz2);

    printf("\n");

    char sz3[5] = { 65, 0, 67, 68, 0 };     // 문자열 == "A"
    printf("%s", sz3);  // %s는 문자열로 출력

    printf("\n");
    char sz4[] = { 'a', 'b', 'c', 'd', 'e', '\0'}; // '\0' == 0, 문자열
    printf("%s", sz4);  // %s는 문자열로 출력

    printf("\n");
    char sz5[] = "Hello";
    printf("%s", sz5);

    printf("\n");
    printf("sz5 배열의 크기 : %llu\n", sizeof(sz5)); // 배열의 크기 == 6

    printf("sz5의 문자열의 길이 : %llu\n", strlen(sz5));
}


void input_string()
{
    char sz[30] = { 0 };    // sz[0], sz[n]
    //int num;
    //scanf("%d", &num);  // & 주소(Address) 연산자
    //char ch; 
    //scanf("%c", &ch);   // 문자 한개 입력

    printf("문자열을 29자(영문기준)내로 입력하세요 >>> ");
    scanf("%s", sz);    // 문자열을 입력받을때는 주소 연산자를 붙이지 않는다
    /*char ch = 'a';
    sz = &ch;*/
    const int num = 10;
    

    printf("입력 내용 : %s\n", sz);
    printf("sz 배열의 크기 : %llu\n", sizeof(sz));
    printf("sz 문자열의 길이 : %llu\n", strlen(sz));
    printf("sz 배열의 시작 주소 : %p\n", sz);
    printf("sz 배열의 첫번째 요소 : %c\n", sz[0]);
    printf("sz 배열의 첫번째 요소의 주소 : %p\n", &sz[0]);

    sz[0] = 'w';
}


void array_basic()
{
    int num;    // 메모리에 4바이트로 정수 타입의 데이터를 저장할 수 있도록 할당

    // int nums[3] = { 0 };    // nums배열의 모든 요소들을 0으로 초기화한다
    int nums[3] = { 1,2,3 };    // nums배열의 모든 요소들을 0으로 초기화한다
    for (int i = 0; i < 3; i++)
    {
        printf("nums의 %d번째 값 : %d\n", i, nums[i]);
    }



    printf("nums의 %d번째 값 : %d\n", 0, nums[0]);
    printf("nums의 %d번째 값 : %d\n", 1, nums[1]);
    printf("nums의 %d번째 값 : %d\n", 2, nums[2]);

    num = 10;

    // 변수처럼 배열의 각 요소에 접근하여 값을 할당하기
    nums[0] = 100;
    nums[1] = 200;
    nums[2] = 300;

    // 변수처럼 배열의 각 요소에 접근하여 값을 가져오기
    num = nums[0];
    num = nums[1];
    num = nums[2];

    // short형 배열
    short arr[5] = { 0 };

    // 배열선언시 초기화할대 []의 내용을 생략할 수 있는데,
    // 이때 초기화된 갯수만큼 배열의 갯수가 정해진다.
    char sz[] = { 'a', 'b', 'c', 'd', 'e' };  // 0 ~ 4
    // printf("%c\n", sz[5]); // Indexing Out of Bounds Error가 발생할 수 있다.
}

int main()
{
    // set_even();
    // array_count();
    // array_string();
    input_string();

    return 0;
}
