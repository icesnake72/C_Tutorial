#include <stdio.h>	// 표준 입출력에 관련된 함수들 선언
#include <stdlib.h>	// 표준 유틸리티 함수들이 선언
#include <time.h>	// 랜덤 초기화


// 랜덤 초기화
void init_random()
{
	srand(time(NULL));	
}


//
// 배열의 모든 요소들의 값을 랜덤한 값으로 초기화하는 함수
void random_value_to_array(short* pArr, unsigned int count, int limit)
{
	if (!pArr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		pArr[i] = rand() % limit;	// 랜덤값을 100이하로 한정시킨다
	}
}


// 배열의 모든 요소들을 출력하는 함수
void show_array(short* pArr, unsigned int count)
{
	if (!pArr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		printf("%d\t", pArr[i]);
	}
	printf("\n");
}


// 두 변수의 값을 교환하는 함수
void swap(short* pNum1, short* pNum2)
{
	short tmp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = tmp;
}


// 주어진 배열의 내용을 정렬시키는 함수
void sort_array(short* pArr, unsigned int count, char show)
{
	// 정렬(SORT)
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (pArr[i] > pArr[j])
			{
				swap(&pArr[i], &pArr[j]);
			}
		}

		// show값이 주어지면 정렬중의 배열을 출력한다
		if (show)
		{
			// 배열의 모든 요소들을 출력한다
			printf("정렬중 :\t");
			show_array(pArr, count);
		}
	}
}
