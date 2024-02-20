#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void string_with_array()
{
    char sz[] = "Welcome to Korea"; // sz[] = {'W', 'e', ... '\0'};
    printf("%s\n", sz);
    printf("sizeof sz : %llu\n", sizeof(sz));
    printf("length of sz : %llu\n", strlen(sz));

    printf("인덱스 %d번째 문자 : %c\n", 2, sz[2]);

    sz[0] = 'w';    // 얼마든지 가능

    // sz는 배열자체의 시작주소값으로 고정이므로, 다른 값을 갖을 수 없다
    // sz = "Hello John, Nice to meet you, how are you.";
    // "Welcome to Korea" = "Hello John, Nice to meet you, how are you.";
}

void string_with_pointer()
{
    const char* sz = "Welcome to Korea";
    // sz[0] = 'A';    안됨!!!   

    printf("%s\n", sz);
    printf("sizeof sz : %llu\n", sizeof(sz));
    printf("length of sz : %llu\n", strlen(sz));

    printf("인덱스 %d번째 문자 : %c\n", 2, sz[2]);


    sz = "Hello John, Nice to meet you, how are you.";

    printf("%s\n", sz);
    printf("sizeof sz : %llu\n", sizeof(sz));
    printf("length of sz : %llu\n", strlen(sz));

    printf("인덱스 %d번째 문자 : %c\n", 2, sz[2]);
}

void string_functions()
{
    char sz[30] = { 0 };

    printf("문자열을 입력하세요");
    gets_s(sz); // 입력중에 공백문자가 포함되어도 입력처리를 해준다, scanf()는 공백문자전까지만 입력해준다
    puts(sz);   // printf("%s\n", sz);
    puts(sz);

    const char* psz = "Hello World";
    psz = "Welcome to Korea";
    const char *psz2 = "Welcome to Korea";

    // if (psz == psz2) 위 상황에서 이 코드는 유효하지만, 이렇게 사용하면 안된다!!


    // gets_s(psz);     // pointer형 문자열로 입력을 받을 수 없다
    puts(psz);

    // 
    size_t len = strlen(sz);    // 문자열의 길이를 구하여 반환
    printf("%s의 길이는 %llu입니다\n", sz, len);

    char sz2[30] = { 0 };
    
    // 문자열의 복사
    strcpy(sz2, sz);    // sz의 문자열이 sz2에 복사된다
    strcpy(sz2, psz);   // pointer형 문자열이 원본으로 오는건 가능하다
        
    strncpy(sz2, sz, 5);    // sz문자열중에 앞에 5글자만 복사



    // 문자열 추가(이어붙이기)
    strcat(sz2, sz);        // sz2에 sz의 내용을 뒤쪽에 이어 붙인다
    strncat(sz2, sz, 5);    // sz2에 sz의 내용을 5글자만 뒤쪽에 이어 붙인다



    // 문자열의 비교
    char sz3[30] = "Welcome to Korea";
    // if ( psz == sz3 )        // psz의 값(주소: 해당 문자열의 주소)과 sz의 주소를 비교
    if (!strcmp(sz3, psz))      // 두 문자열이 같은지 비교
        printf("sz3과 psz의 내용은 같습니다\n");
    else
        printf("sz3과 psz의 내용은 다릅니다\n");




}



int main()
{
    /*string_with_array();

    printf("\n\n");

    string_with_pointer();*/

    string_functions();

    return 0;
}
