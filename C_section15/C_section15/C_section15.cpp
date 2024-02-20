// C_section15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>	// 표준 입출력에 관련된 함수들 선언
#include "array_util.h"

#define ARRAY_COUNT		5
#define RANDOM_MAX		100


int main()
{
	int arr[ARRAY_COUNT];

	init_random();

	// 배열의 갯수를 구한다
	unsigned int count = sizeof(arr) / sizeof(int);

	// 배열의 모든 요소들의 값을 랜덤한 값으로 초기화
	random_value_to_array(arr, count, RANDOM_MAX);

	// 정렬전의 배열을 출력한다
	printf("정렬전 :\t");
	show_array(arr, count);

	// 배열의 내용을 정렬한다
	sort_array(arr, count, 1);

	// 배열의 모든 요소들을 출력한다
	printf("정렬후 :\t");
	show_array(arr, count);

	return 0;
}