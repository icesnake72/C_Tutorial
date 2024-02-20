#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> // strcpy
#include <stdlib.h> // malloc
#include <memory.h> // memcpy

#include <conio.h>  // windows os ����, Ű �Է� _getch()
#include <windows.h>// windows os ����, system()

typedef unsigned int    uint;

// ����ü (struct)
// 
//struct person {
//    char name[20];
//    unsigned int age;
//};

typedef struct {
    char name[20];
    unsigned int age;
} PERSON;

// �л��� �̸��� ����, ����, ����, ����, ��հ��� ���� ����ü�� �����Ͻÿ�.
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

// ppScore : �迭
// pScore : �߰��� ���� ������
// count : �迭�� ���� ������ ����
// ��ȯ�� : �迭�� �����͸� �߰��� �� �迭�� ����
uint append_score(SCORE** ppScore, SCORE* pScore, uint count);

// pScores : ���� ������ �迭
// count : �迭�� ����
void show_scores(SCORE* pScores, uint count);

SCORE input_score();

void input_score2(SCORE* pScore);

uint input_score3(SCORE** ppScore, uint count);