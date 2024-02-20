#include <stdio.h>	// ǥ�� ����¿� ���õ� �Լ��� ����
#include <stdlib.h>	// ǥ�� ��ƿ��Ƽ �Լ����� ����
#include <time.h>	// ���� �ʱ�ȭ


// ���� �ʱ�ȭ
void init_random()
{
	srand(time(NULL));	
}


//
// �迭�� ��� ��ҵ��� ���� ������ ������ �ʱ�ȭ�ϴ� �Լ�
void random_value_to_array(short* pArr, unsigned int count, int limit)
{
	if (!pArr || !count)
		return;

	for (int i = 0; i < count; i++)
	{
		pArr[i] = rand() % limit;	// �������� 100���Ϸ� ������Ų��
	}
}


// �迭�� ��� ��ҵ��� ����ϴ� �Լ�
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


// �� ������ ���� ��ȯ�ϴ� �Լ�
void swap(short* pNum1, short* pNum2)
{
	short tmp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = tmp;
}


// �־��� �迭�� ������ ���Ľ�Ű�� �Լ�
void sort_array(short* pArr, unsigned int count, char show)
{
	// ����(SORT)
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (pArr[i] > pArr[j])
			{
				swap(&pArr[i], &pArr[j]);
			}
		}

		// show���� �־����� �������� �迭�� ����Ѵ�
		if (show)
		{
			// �迭�� ��� ��ҵ��� ����Ѵ�
			printf("������ :\t");
			show_array(pArr, count);
		}
	}
}
