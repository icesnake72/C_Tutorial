#pragma once


// 랜덤 초기화
void init_random();

// 배열의 모든 요소들의 값을 랜덤한 값으로 초기화하는 함수
void random_value_to_array(short* pArr, unsigned int count, int limit);

// 배열의 모든 요소들을 출력하는 함수
void show_array(short* pArr, unsigned int count);

// 두 변수의 값을 교환하는 함수
void swap(short* pNum1, short* pNum2);

// 주어진 배열의 내용을 정렬시키는 함수
void sort_array(short* pArr, unsigned int count, char show);