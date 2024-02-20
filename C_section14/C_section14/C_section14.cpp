
#include <stdio.h>


void show_value(int param)
{
    printf("출력할 값은 %d입니다\n", param);
}

void swap(int* pNum1, int* pNum2)
{
    int tmp;
    // *pNUm1 : pNUm1이 가리키고 있는 곳의 값

    tmp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2 = tmp;
}

void init_array(short* ptr, unsigned int length)
{
    if (!ptr)
        return;

    for (int i = 0; i < length; i++)
    {
        ptr[i] = i + 1;
    }
}

void show_array(short* ptr, unsigned int length)
{    
    if (!ptr)
        return; // ptr이 가리키는 포인터가 유효하지 않을때는 함수를 종료한다

    // unsigned
    // int - ~ +

    // sizeof(ptr) ====> 8
    for (int i = 0; i < length; i++)
    {
        show_value(ptr[i]);
    }
}

int add(int a, int b)
{
    return a + b;
}

// 동작을 보장할 수 없다
//short* make_array()
//{
//    short array[5] = { 0 }; // 지역변수, 자동변수
//    init_array(array, 5);
//
//    return array;
//}


void div(int a, int b, int *pMok, int* pMod)
{
    if (!b) return;

    *pMod = a % b;
    *pMok = a / b;
    //return a / b;
}






int main()
{
    short array[5] = { 0 };
    // short* ptr = array;

    // sizeof(array) ===> 2 * 5 = 10
    // sizeof(array) / sizeof(int)
    
    // Call by value(값에 의한 호출)
    show_value(10); // show_value함수의 매개변수 param을 10으로 초기화하면서 호출

    // Call by reference(참조에의한 호출)
    init_array(array, 5);
    show_array(array, 5);

    // short* pArr = make_array(); <==== 절대 않됨!!!
    // printf("%d", pArr[0]);
    // show_array(pArr, 5);

    int num1 = 10;
    int num2 = 5;
    printf("num1=%d, num2=%d\n", num1, num2);

    swap(&num1, &num2);

    printf("num1=%d, num2=%d\n", num1, num2);

    int mok, mod;
    div(10, 3, &mok, &mod);

    return 0;
}