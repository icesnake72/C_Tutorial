#pragma once


// ���� �ʱ�ȭ
void init_random();

// �迭�� ��� ��ҵ��� ���� ������ ������ �ʱ�ȭ�ϴ� �Լ�
void random_value_to_array(int* pArr, unsigned int count, int limit);

// �迭�� ��� ��ҵ��� ����ϴ� �Լ�
void show_array(int* pArr, unsigned int count);

// �� ������ ���� ��ȯ�ϴ� �Լ�
void swap(int* pNum1, int* pNum2);

// �־��� �迭�� ������ ���Ľ�Ű�� �Լ�
void sort_array(int* pArr, unsigned int count, char show);