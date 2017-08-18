#include<stdio.h>

void change(int* n1, int* n2) {
	int tmp = *n1; //saving pointer value in memory
	*n1 = *n2; //������ ����� ����
	*n2 = tmp; //saving pointer value as address?
	//array ���� ����ϳ�
}

/*
���� �̸����� ������ �� ���� ���
- �ܺ� �Լ� �Ҽ��� ����/�迭
- �����Ҵ� �޸�
- �� �̿��� �޸�
=> ��ġ �ּҸ� ���� ã�ư��� �Ѵ�.
---------------------------------
�޸� - �׸�
������ - �����ȣ
�ּ� - 1����Ʈ �� 1����. 0���� �� 42�� 32��Ʈ ������ ���
�ּҿ� ������ ���� �Ұ�.
RAM Ư¡
	���� ������ ���α׷��� ���� �� ������ �ٸ� ��ġ�� �Ҵ�.

*/
void switcheroo () {
	int n1, n2;
	printf("���� 1: ");
	scanf_s("%d", &n1);
	printf("���� 2: ");
	scanf_s("%d", &n2);
	printf("��ȯ ��: %d %d \n", n1, n2);
	change(&n1, &n2);
	printf("��ȯ ��: %d %d \n", n1, n2); //�� �ڵ� �ȵǴ� �ڵ��� �ٸ� �Լ��� ������ n1 n2 �̹� ��Ծ� ������
	//�׷��� �����Ͱ��� ������ �ͼ� ������.
}

void ex2() {
	int a = 10;
	printf("%d \n", a);
	printf("%d \n", &a); //�ּ�	
}
/*
int * pa ��Ʈ������ �����Ͷ�
double * pa ���������� �����Ͷ�
*/

void ex3() {
	int a = 100; //actual variable declaration
	//�����ͺ����� 1�� ���� �װ� ����ؼ� a�� 1004�� �ٲ���.
	// ������ ���� ��뤷��
	/*
	�ּ� �޸��� �غ� (������ ���� ����)
	�޸��忡 �ּ� ���� (�ּ� ����)
	ã�ư���� �����ϱ� (������ ������)
	*/
	int * p; //pointer var declaration
	p = &a; // storing address of a in pointer var
	printf("���� a�� �ּ�: %d\n", &a);
	printf("p�� ����� �ּ�: %d\n", p);
	printf("�����͸� ����� ������ �������ڽ��ϴ�: %d\n", *p);
	*p = 1004; // ���� (�޸�)
	printf("�����͸� �����ϰ� ������ �������ڽ��ϴ�: %d\n", a);
}

void setData(char*name, int*kr, int*eng, double*avg, char*grade) {
	printf("�̸�: ");
	scanf_s("%s", name, 20);
	printf("��������: ");
	scanf_s("%d", kr); //�ּҿ� ���� (&�� �޸𸮿� �����ϱ� ����
	printf("��������: ");
	scanf_s("%d", eng);
	*avg = (*eng + *kr) / 2.0; //�� �κп��� ������ ���� ���ϱ�
		if (*avg >= 90) {
			*grade = 'A';
		}
		else if (*avg < 90 && *avg >= 80) {
			*grade = 'B';
		}
		else if (*avg < 80 && *avg >= 70) {
			*grade = 'C';
		}
		else if (*avg < 70 && *avg >= 60) {
			*grade = 'D';
		}
		else *grade = 'F';
}

void ex4() {
	char name[20];
	int kr, eng;
	double avg;
	char grade;
	setData(name, &kr, &eng, &avg, &grade);
	printf("\n�л� ������ �帮�ڽ��ϴ�:\n");
	printf("�̸�: %s\n�����: %d\n�����: %d\n�������: %.2lf\n���ĺ�����: %c\n",name, kr, eng, avg, grade);
}
void main() {
	//ex3();
	//switcheroo();
	ex4();
}