#include "funcs.h"

extern int g_val;


// func1 �Լ��� ����(����)
// ��ȯ���� ���� �Լ�, �Ű������� �ִ� �Լ�
// �Ű������� �޾Ƽ� ���⼭ ����� ����ϴ� �Լ���...
void func1(int param)   // param = number;
{
    // return;
    // �Ű����� : �Լ��� ȣ�⿡ ���� �ʱ�ȭ�Ǿ����� ���� �����̴�.


    if (param % 2)
        printf("number = %d, �� Ȧ�� �Դϴ�\n", param);
    else
        printf("number = %d, �� ¦�� �Դϴ�\n", param);
}


// �Լ��� ���Ǵ� �ݵ�� �Լ��� ȣ�⺸�� ������ �־�� �Ѵ�
int func2(int param)    // �Լ��� �����Ѵ�(Define a function)
{
    return param % 2;
}

// �Լ��� 4���� ����
// ��ȯ���� �ִ� �Լ�, �Ű������� �ִ� �Լ�
// ��ȯ���� �ִ� �Լ�, �Ű������� ���� �Լ�
// 
// ��ȯ���� ���� �Լ�, �Ű������� �ִ� �Լ�
// ��ȯ���� ���� �Լ�, �Ű������� ���� �Լ�



// ��ȯ���� ���� �Լ�, �Ű������� ���� �Լ�
void func3()    // �Һ��� �Լ�
{
    printf("Ÿ��Ʋ\n");
    printf("�Ϲ������� � Ư�� ������ ����ϴ� �Լ���\n");
}


// �Ű������� ���� ��ȯ���� �ִ� �Լ�
double getPi()
{
    return 3.14;    // ������ �ִ� �� ��ȯ�ϴ� �Լ�
}


int func4(int param1)   // ���� ����
{
    static int s_num = 0;   // ��������, ���������� ������ ���� �ִ� ��������

    int number = 0; // func4()�Լ��� ���� ����

    g_val = 10;
    

    // �������� : ����(Local, �ڵ��)
    for (int i = 0; i < 10; i++)
    {
        // int i�� func4()�Լ��� for���� ��������
        number += i;
    }

    // i = 10; 
    
    {
        number = 0;
        int i;
    }

    if (param1 > 0)
    {
        int i;
    }
    else
    {
        int i = 0;
    }

    s_num = number;

    return number;      // number�� �ִ� ���� ��ȯ
}


