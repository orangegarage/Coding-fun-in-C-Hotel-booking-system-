#include<stdio.h>
void ex1() {
	//�迭 �ʱ�ȭ ���
	//int a[] = { 1,2,3 };// ���ҿ� �°� 3ĭ �ڵ� ����
	//int a[5] = { 10 }; // a[0]�� 10 ����, ������ 4ĭ�� ��� 0���� �ʱ�ȭ
	int a[][2] = { 1,2,3,4,5,6 }; //3 rows 2 column �ڵ� ����

	//������ �迭�� ������ 1�ٷ� �� ������.
	//�׷��� ��� ���� ���ϰ� �׳� for �� �ϳ� �ᵵ �� (row �� 0���� �ع�����)
}

void newYearDates() {
	int year[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int month, date, totalDate;
	totalDate = 0;
	//�Է� ���� �� format ��/�� (no space) ���� �� ��ĥ
	//1/1 ���� 12/31������ �� 364��
	//�⺻ a
	printf("��: ");
	scanf_s("%d", &month);
	printf("��: ");
	scanf_s("%d", &date);
	printf("1�� 1�Ϻ��� %d�� %d�ϱ���: ", month,date);
	for (int i = 0; i < month; i++)
		totalDate += year[i];
		totalDate-=(1-date);
	printf("%d��", totalDate);
}
//5�� �л��� �̸�, ���� ���� ������ �� �ִ� �迭 ���� ��
//�л��� �̸��� ���� �Է� �ް� ����ϰ� ��� ���Ѵ�.

void grades() {
	char names[5][20];
	int grades[5];
	int total, avg;
	for (int i = 0; i < 5; i++) {
		printf("�̸�: ");
		scanf_s("%s", names[i]);
		printf("����: ");
		scanf_s("%d", &grades[i]);
	}
	for (int i = 0; i < 5; i++) {
		total += grades[i];
		printf("%d. %s: %d��\n",i+1, names[i], grades[i]);
	}
	avg = total / 5;
	printf("5�� �� ��� %d��\n", avg);
}

	/*
	���� ������ ����
	1.�������� //local variable
		-����: �߰�ȣ �ȿ�
		-����: �� �߰�ȣ �ȿ�����
		-����: �߰�ȣ ������ ������ ȿ���� �����

	2.�������� //global variable
		-����: �߰�ȣ ��, �ҽ����� ���
		-����: �ҽ����� .c ��ü ����
		-����: ���α׷� ����.
		**�����ϸ� �ȵǰ� �߿��� �����͸� ����������.

	3.�������� //static variable
		-����: ������ �������, ���� �տ� static�̶� �ܾ ��
		-����: �ڽ��� ���� ����(�������� ����Ǹ� �ҽ�����, �������� ����Ǹ� �� ����)
		-����: ���α׷��� ����Ǹ� �����
		**������ ������ ������� �ʾƼ�, ������ ������ �ʿ��Ҷ� ���
		**����� �ݺ��Ǹ� ���� 1ȸ�� ����, �� ���Ĵ� �ǳʶ�
		**�������� ������� ���.

	4.�Ű����� //parameter
		-����: �Լ� ���� �� �Ұ�ȣ ���ο� ����
		-����: �� �Լ� ����
		-����: �Լ��� return�Ǹ� �����
		**�Լ��� ����Ǹ� ���������
	*/

int a = 100;
void ex3() {
	int a = 10;
	{
		int a = 20;
		int b = 1004;
		printf("%d\n", a);
		printf("%d\n", b);
	}
	printf("%d\n", a);
}
void ex4() {
	printf("%d\n", a);
}

void ex5() {
	printf("�������� test\n");
	for (int i = 0; i < 5; i++) {
		int a = 0;
		printf("%d\n", a);
		a++; //�̰� �ƹ��� �÷����� ���� �����鼭 �ٽ� 0�ɵ�
	}
	printf("\n");
	printf("static var test\n");
	for (int i = 0; i < 5; i++) {
		static int a = 0; //�ѹ� ���� �� �Ŀ� ����
		printf("%d \n", a);
		a++;
	}
}
void main() {//�����Լ�
	//ex1();
	//newYearDates();
	//grades();
	/*
	ex3();
	ex4();
	*/
	ex5();
}