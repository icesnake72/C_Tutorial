#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> // strcpy
#include <stdlib.h> // malloc
#include <memory.h> // memcpy

#include <conio.h>  // windows os 가능, 키 입력 _getch()
#include <windows.h>// windows os 가능, system()

typedef unsigned int    uint;

// 구조체 (struct)
// 
//struct person {
//    char name[20];
//    unsigned int age;
//};

typedef struct {
    char name[20];
    unsigned int age;
} PERSON;

// 학생의 이름과 국어, 영어, 수학, 총점, 평균값을 갖는 구조체를 설계하시오.
typedef struct {
    char name[20];
    uint kor;
    uint eng;
    uint math;
    uint total;
    float avg;
    char grade;
} SCORE;

void show_menu();

// ppScore : 배열
// pScore : 추가될 성적 데이터
// count : 배열의 현재 아이템 갯수
// 반환값 : 배열에 데이터를 추가한 뒤 배열의 갯수
uint append_score(SCORE** ppScore, SCORE* pScore, uint count);

// pScores : 성적 데이터 배열
// count : 배열의 갯수
void show_scores(SCORE* pScores, uint count);

SCORE input_score();

void input_score2(SCORE* pScore);

uint input_score3(SCORE** ppScore, uint count);