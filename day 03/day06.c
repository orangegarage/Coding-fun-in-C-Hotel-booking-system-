#include <stdio.h>
#include <stdbool.h>
void day06() {
	/*
	������
	+ - * / */
	//�ѹ��� �ϳ���
	//+=*=/=%=
	//������� ����/���� �ϸ� �����ۿ� �ȳ��´�. whyyyy
	//% = mod = ������
	printf("%d\n", 10 % 4); // 2
	printf("%d\n", 2 % 4); //0

	int score = 0;
	score++; //1
	printf("����: %d\n", score);
	score += 1; // 1+1 = 2
	printf("����: %d\n", score);
	score += 10; // 2+10 = 12
	printf("����: %d\n", score);
	score /= 2; // 12/2 = 6
	printf("����: %d\n", score);
	score *= 3;//6*3=18
	printf("����: %d\n", score);
	score = 0;
	printf("����: %d\n", score);
}

void ex2() {
	// ���������� ++ --
	int score = 10;
	score++; //11
	printf("����: %d\n", score);
	++score; // 12
	printf("����: %d\n", score);
	score--; //11
	printf("����: %d\n", score);
	--score;//10
	printf("����: %d\n", score);
}
void ex3() {
	// i++ vs ++i?
	int i = 0;
	int j = i+1; // �׳� ������ j�� i���� i ũ��. i�� ������ 0��. �̰� ������ i++���ָ� i�� �ٲ����
	printf("i: %d j:%d\n", i, j);
	printf("i: %d\n", i);
	i = 0;
	j = i++; // j = i ���� �Ǿ j=0, �� ���� ++ ����, i�� 1�� �ٲ�
	printf("i: %d j:%d\n", i, j);
	printf("i: %d\n", i);
	printf("j: %d\n", j);
	i = 0;
	j = ++i; //j �� i���� ++�� ���� ������ i�� ������ �̹� i�� ����� �� ��. i�� �ٲ�
	printf("i: %d j:%d\n", i, j);
}
void greatThan() {
	// <, <=, >, >=, ==, !=
	//printf("%d\n", 17 % 3 == 0);
	int a = 0;
	printf("%d\n", a == 0);// ����
	printf("%d\n", !a); // a�� 0�ΰ���? ��� �� ������ a==0 ���� ����
}

void ageTest() {
	int age;
	printf("����� ����: ");
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("�����Դϴ�\n");
	}
	else if (age > 13) {
		printf("û�ҳ��̽ó׿�\n");
	}
	else
	printf("��� �Դϴ�.\n");
}
void ex6() {
	// ���ǽ� ? ���϶� : �����϶�
	int age;
	printf("���̰� ����ΰ���: ");
	scanf_s("%d", &age);
	printf(age >= 20 ? "����\n" : "����\n");
}

void oddEven() {
	int i;
	printf("���ڸ� �ϳ� ������: ");
	scanf_s("%d", &i);
	printf("���� ���� %d��(��) ", i);
	printf(i%2==0 ? "¦���Դϴ�\n" : "Ȧ���Դϴ�\n");
}

void casting() {
	//�� ��ȯ (casting a type)
	//�ڵ� ����ȯ (auto casting)
	//���� ����ȯ (force casting)
	double a = 100.9;
	printf("%d\n", (int)a); // a is typecasted to int
	//typecasting to double?
	//bitwise operations int short long ������ ��� ����
}


void main() {
	//day06();
	//ex2();
	//ex3();
	//greatThan();
	//ageTest();
	//ex6();
	//oddEven();
}