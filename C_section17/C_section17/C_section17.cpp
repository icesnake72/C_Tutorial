
#include <stdio.h>
#include <stdlib.h>

#include "array_util.h"


// 형 재정의 (Type Re-define)
typedef unsigned int    uint;

// 함수를 재정의
typedef int (*SHOW_FUNC)(int val);





size_t allocate_memory(short** pptr, uint count)
{
    *pptr = NULL;
    size_t size = count * sizeof(short);    // size값을 byte단위로 구함
    short* pNew = (short*)malloc(size); // calloc(count, sizeof(short))
    if (!pNew)
    {
        // 메모리 할당에 실패!!!
        return 0;
    }

    *pptr = pNew;
    return size;
}

void* allocate_memory2(uint count)
{
    size_t size = count * sizeof(short);    // size값을 byte단위로 구함
    void* pNew = malloc(size);

    return pNew;
}

short* alloc_memory3()
{
    short arr[5] = { 0 };
    random_value_to_array(arr, 5, 100);
    return arr;
}


int show_value(int val)
{
    printf("매개변수 값은 %d입니다\n", val);

    return val;
}

void show_func(SHOW_FUNC fptr, int val)
{
    // 엄청난 다운로드
    int ret = fptr(val);

    printf("fptr을 호출한 결과 : %d\n", ret);
}


int main()
{
    // 함수의 포인터 변수를 선언
    int (*fptr)(int val);
    //fptr = show_value;

    //show_value(10);
    //fptr(10);

    show_func(show_value, 10);
    
    short* pArr = NULL;
    uint count = 15;

    size_t ret = allocate_memory(&pArr, count);
    if (!ret || !pArr)
    {
        // 메모리 할당에 실패!!!
        return 0;
    }
    //pArr = (short *)allocate_memory2(count);
    //if (!pArr)
    //{
    //    // 메모리 할당 실패!!!
    //    return 0;
    //}


    // 랜덤 초기화
    init_random();

    // 난수값을 배열에 할당한다
    random_value_to_array(pArr, count, 100);

    // 배열의 내용을 출력한다
    show_array(pArr, count);

    if (pArr)
    {
        free(pArr);
        pArr = NULL;
    }

    return 0;
}
