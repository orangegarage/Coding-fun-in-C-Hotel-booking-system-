#include<stdio.h>
double PI = 3.14;

void add(int a, int b, int c) { //�Լ� ���� ���� abc parameter
	printf("%d, %d, %d �� ���� ���� %d �Դϴ�.\n", a, b, c, a + b + c);
} //�Լ� ���� ��

double circle() {
	int r;
	printf("������: ");
	scanf_s("%d", &r);
	return r*r*PI; //return�ϸ� ��� �����ش� �� main���� printf �Ἥ ���������ϴµ�
}
int plus(int aa, int bb) {
	int total;
	total = aa + bb;
	return total;
}

/*
scanf ���� ���� �ϳ� �Է¹ް� �� ���ڸ� �����ϴ� �Լ� ����
���ڰ����� ���� 1���� �ް�, �빮�ڸ� �ҹ��ڸ�, �ҹ��ڸ� �빮�ڸ� ����ϴ� �Լ� ����(�ƽ�Ű ���� �ǳ�)
�� �Լ��� ��� ȣ���ϰ�, ���������� �����ϵ��� �ڵ带 �ۼ��ϼ���.
*/

const char* typeReturn() { //why const char https://stackoverflow.com/questions/1496313/returning-c-string-from-a-function
	char chara[20];
	printf("���� �ϳ� �Է��ϼ���: ");
	scanf_s("%s", chara, 20);
	return chara;
}

void main() {
	printf("�Է��Ͻ� ����: %s\n",typeReturn());
	//add(10,20,5); //�Լ� ȣ��
	/*
	printf("���� ����: %.2lf\n", circle()); //�ٷ� print
	double circle1 = circle(); //���Ӱ� ������ �غ���. ������ ���� (�� ���� ��� �Ϸ� �� circle1�� ����. ����Ʈ�� ����)
	printf("��1�� ����: %.2lf\n", circle1); //circle1�� �ҷ� ����Ʈ
	
	int a, b;
	printf("���� 2���� �Է��� �ּ���:\n");
	scanf_s("%d",  &a);
	printf("�׸���\n");
	scanf_s("%d", &b);
	printf("���ϸ�: %d\n", plus(a, b));
	*/
}

/*
return:
1. �����϶�
2. ȣ��� �ڸ��� ���ư���
3. ��ȯ���� ������ �� ���� ȣ��� �ڸ��� �־��
*/
//**���α׷��� ������ �����Լ����� ����
//strcpy scanf_s printf �� �Լ�
//**if else ���� �Ұ�ȣ ������ �Լ�, ���ȣ ������ �迭, �ϰ͵� �Ⱥپ������� ����