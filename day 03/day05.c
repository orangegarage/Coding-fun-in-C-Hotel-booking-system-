#include<stdio.h>
/*
���� �۸� ��Ģ

���ڷ� ���� ����
�ߺ��̸� ����
������� ����
Ư����ȣ _�ƴϸ�$
�ѱ� ����
����� (int double etc) �� ���������� ���� �Ӵ�
*/
void ex1() {
//Ű���� �Է�
	//scanf_s(); scan format secure ������ ������� �ȵ�
	char name[20];
	int age;
	double height;
	char address[100];
	printf("�̸�: ");
	scanf_s("%s", name, 20);
	printf("����: ");
	scanf_s("%d", &age); //why and?
	printf("Ű: ");
	scanf_s("%lf", &height);
	printf("�ּ�: ");
	scanf_s("%s", address, 100);
	printf("�̸�: %s\n����: %d\nŰ: %.1lf\n�ּ�: %s\n", name, age, height, address);
}

void ex2() {
	char name[20];
	char young[50] = "���� �����ó׿�";
	char medium[50] = "���� �������� �� ���ó׿�.";
	char old[30] = "��... �����...";
	int age, futureAge;
		printf("�̸��� ������?: ");
		scanf_s("%s", name,20);
		printf("����: ");
		scanf_s("%d", &age);
		futureAge = age + 3;
		printf("����� 3�� �Ŀ�... %d���� �˴ϴ�.\n", futureAge);
	if (futureAge <= 25) {
		printf("%s���� %s\n",name, young);
	}
	if (age > 22 && age < 30) {
		printf("%s���� %s\n",name, medium);
	}
	if (age >= 30) {
		printf("%s\n", old);
	}
}

void ex3() {
	//Constant ���
	/*
	making a symbolic constant
	1. ���� �տ� const ���δ� 
	ex) const double PI = 3.14;
	2. #define
	ex) #define PI 3.14
	*/
#define GOLDRAIN 1.618 //; ������ ����
	printf("Ȳ�ݺ�: %.3lf\n", GOLDRAIN);
}

void main() {
	//ex1();
	//ex2();
	//ex3();
}
