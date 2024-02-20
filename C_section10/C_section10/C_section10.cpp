#include <stdio.h>


// POINTER (포인터)


void basic_of_pointer()
{

    int number = 10;        // data type : 정수, 실수, address
    int* ptr = &number;     // ptr : 포인터, 주소값만 저장할 수 있는 변수

    printf("number의 값 : %d\n", number);         // 
    printf("number의 주소 : %p\n", &number);      // 
    printf("number변수의 크기 : %llu\n", sizeof(number));

    printf("ptr의 값 : %p\n", ptr);
    printf("ptr이 가리키고 있는 곳의 값 : %d\n", *ptr);
    printf("ptr의 주소 : %p\n", &ptr);
    printf("ptr변수의 크기 : %llu\n", sizeof(ptr));

    printf("\n\n");

    char ch = 'A';
    char* ptr2 = &ch;
    printf("ch의 값 : %d\n", ch);         // 
    printf("ch의 주소 : %p\n", &ch);      // 
    printf("ch변수의 크기 : %llu\n", sizeof(ch));

    printf("ptr2의 값 : %p\n", ptr2);
    printf("ptr2이 가리키고 있는 곳의 값 : %d\n", *ptr2);
    printf("ptr2의 주소 : %p\n", &ptr2);
    printf("ptr2변수의 크기 : %llu\n", sizeof(ptr2));

    printf("\n\n");

    printf("int 타입의 크기 : %llu\n", sizeof(int));     // windows system에서는 4, 다른 시스템에서도 4
    printf("long 타입의 크기 : %llu\n", sizeof(long));   // windows system에서는 4, 다른 시스템에서는 8

    printf("\n\n");

    // ch = (char)number;    // 형변환을 통해 데이터의 대입이 가능하나, 데이터의 손실이 발생할 수 있다.

    // 형변환을 통해서 대입 가능하고, 데이터 소실도 발생하지 않는다.
    // ptr = (int*)ptr2; // (int *) = (char *)

    *ptr = 30;  // *(&number) = 30 === > number = 30
    printf("number의 값 : %d\n", number);

    printf("\n\n");

    int number2 = 100;
    ptr = &number2; // ptr이 가리키는 곳이 바뀜
    (*ptr)++;   // ptr은 number2를 가리키고 있고 그 곳의 값을 1증가 시킴

    printf("number2의 값 : %d\n", number2);
}

void array_and_pointer()
{
    char sz[] = "Hello";
    char* ptr = sz;
    
    
    printf("sz의 첫번째 요소의 값 : %c\n", sz[0]);  //0x80[0]
    printf("sz의 첫번째 요소의 값 : %c\n", ptr[0]); //0x80[0]

    printf("sz의 첫번째 요소의 값 : %c\n", *ptr);       // ptr[0] = sz[0]
    printf("sz의 첫번째 요소의 값 : %c\n", *(ptr+1));   // offset, ptr[1]
    printf("sz의 첫번째 요소의 값 : %c\n", *(ptr+2));   // ptr[2] = sz[2]
    printf("sz의 첫번째 요소의 값 : %c\n", *(ptr+3));   // ptr[3] = sz[3]
    printf("sz의 첫번째 요소의 값 : %c\n", *(ptr+4));   // ptr[4] = sz[4]

    printf("sz의 첫번째 요소의 값 : %c\n", *ptr);       // ptr[0] = sz[0]
    // ptr = ptr + 1
    printf("sz의 첫번째 요소의 값 : %c\n", *(++ptr));   
    printf("sz의 첫번째 요소의 값 : %c\n", *(++ptr));
    printf("sz의 첫번째 요소의 값 : %c\n", *(++ptr));
    printf("sz의 첫번째 요소의 값 : %c\n", *(++ptr));  
}


void array_and_pointer2()
{
    // int num;    // 뭐가 들어가 있을지 알 수 없다

    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr;   // 뭐가 들어가 있을지 알 수 없다, 8byte
    ptr = arr;  // ptr이라는 변수는 arr 배열의 시작 주소를 갖는다.

    //int number;
    //char num = 10;
    //number = num;

    //char* ptr2 = &num;
    //ptr = ptr2;



    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("ptr+%d = %d\n", i, *(ptr+i));  // 데이터의 타입은 offset의 크기를 결정한다!!!
    }

    printf("*ptr = %d (%p)\n", *(ptr), ptr);  // 데이터의 타입은 offset의 크기를 결정한다!!!
    printf("*ptr = %d (%p)\n", *(++ptr), ptr);  // 데이터의 타입은 offset의 크기를 결정한다!!!
    printf("*ptr = %d (%p)\n", *(++ptr), ptr);  // 데이터의 타입은 offset의 크기를 결정한다!!!
    printf("*ptr = %d (%p)\n", *(++ptr), ptr);  // 데이터의 타입은 offset의 크기를 결정한다!!!
    printf("*ptr = %d (%p)\n", *(++ptr), ptr);  // 데이터의 타입은 offset의 크기를 결정한다!!!
}



int main()
{
    array_and_pointer2();
    

    return 0;
}
