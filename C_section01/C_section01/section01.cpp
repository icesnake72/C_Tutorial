
// �Լ� (Function)
// C���� �Լ���� �����Ǿ� �ִ�.
// C���� main()�̶�� �ϴ� ��ӵ� �Լ��� ������
// main()�Լ����� �����ؼ� main()�Լ����� ���̳���.

// ���� �ּ�

/*
��Ƽ���� �ּ�
���⿡�ٰ� �������� �ּ��� �� �� �ֽ��ϴ�.
������ �� �� �־��
...
...
*/

/*
C : class �������� �ʴ´�. ��ü������ ���α׷����� �������� �ʴ´�.

C++ : class�� �����Ѵ�. �Ϻ��ϰ� ��ü������ ���α׷����� �����Ѵ�.
.cpp
*/

// stdio.h : ���Ĵٵ� io(��.���) �Լ����� �����ϰ� �ִ� ��� ����
#include <stdio.h>

int main()
{
	printf("Hello C\n");	// c���� ���ڿ��� ǥ���� ""�� ����Ѵ�.

	// c������ ������ Ÿ��
	// ������Ÿ�� ������;
	// ������ Ÿ���� ����
	// 
	// ������ : char(1byte), short(2byte), int(4byte), long(4byte), long long (8byte)
	// ���� ������ ǥ���ϰ� ������ ������ Ÿ�Ծտ� unsigned�� �ٿ��ָ� ������ ���� ������ ������ �� �ִ�.
	// �Ǽ��� : float, double, long double

	// 
	int number;	// ������ intŸ������ number��� �̸��� ������ �����Ѱ��̴�.
	number = 10;
	number = 20;
	number = 0;
	number = -100;
	
	char number2 = 10;
	number2 = 20;
	number2 = -100;

	// number = 0.1; ������ �Ǽ� �����͸� ������ ����

	printf("unsigned char���� ������ ������ : %d\n", sizeof(unsigned char));

	printf("long���� ������ : %d\n", sizeof(long));
	printf("long long���� ������ : %d\n", sizeof(long long));
	printf("float���� ������ : %d\n", sizeof(float));
	printf("double���� ������ : %d\n", sizeof(double));
	printf("long double���� ������ : %d\n", sizeof(long double));



	return 0;	// main()�Լ����� 0�� ��ȯ�ϴ°��� ���α׷��� ���� �����Ѵٴ� ���̴�
}