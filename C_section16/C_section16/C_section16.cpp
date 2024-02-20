
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>




int main()
{
    // Stack영역에 할당되었다
    int arr[] = { 10, 20, 30, 40, 50 };
    // int arr2[50];

    int number = 100;

    int* pArr = arr;
    pArr = &number;

    // 이차원(중) 포인터
    int** pptr = &pArr;

    // void : 없다, 모른다

    int* arr2 = NULL;
    size_t size = sizeof(arr);
        

    //
    // heap 영역에 동적 메모리 할당
    arr2 = (int *)malloc(size); 
    if (!arr2)
    {
        printf("메모리 할당 실패!!!");
        return 0;
    }

    memcpy(arr2, arr, size);
    //for (int i = 0; i < 5; i++)
    //{
    //    arr2[i] = arr[i];
    //}
    if (arr2)
    {
        free(arr2); // 자원의 반납
        arr2 = NULL;
    }        

    return 0;
}
