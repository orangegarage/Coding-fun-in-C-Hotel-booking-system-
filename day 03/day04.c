#include<stdio.h>
void ex1() {
	//�ڷ��� Data Type ���� (int float long double char string)	
	int radius=5;
	double pi=3.14;
	double area = radius*radius*pi;
	printf("������: %d\n", radius);
	printf("����: %.2lf\n" ,area);
	radius = 10;
	area = radius*radius*pi; // ���� ���� �ȹٲ㼭 area �ٽ� ��� �ȵǾ ���⼭ �������� �ؾ���
	printf("���� �� �������� %d�̰� ���̴� %.2lf�̴�.", radius, area);
	//���� ����: declaring variable (�ڷ��� ������ ex int radius;)
	//���� �ʱ�ȭ : initializing variable ���ʷ� ������ ������ ����. ���� ���ϸ� �����Ⱚ �ǰ� ����
	//���� ȣ��: calling variable �� ����.
}

void ex2() {
	//int ���� 3��
	int length, width, height;
	//�̴ϼ��� �ƽ�Ű �ڵ尪 ����, ���
	printf("My initial: %c.%c.\n", 74, 74);
	printf("in ASCII: %d.%d.\n", 'J','J');
	//�� Ű double�� ���� �� ���
	double myHeight= 182.2;
	printf("My height is: %.1lfcm\n", myHeight);
	//3. �غ� 3, ���� 4�� �ﰢ���� ���̸� ���� Ȱ�� ���� �� ���
	width = 3;
	height = 4;
	double area = (width*height)/2;
	printf("�غ�: %d\n����: %d\n�ʺ�: %.1lf\n", width, height, area);
}
void ex3() {
	//���ڿ� array
	char s[7] = "��ī��"; //"���Ӥ�������" 0~7 ���߿� max string length �����ɷ� �����ϸ� ���ҵ�
	printf("%s\n", s);
	//String �� ���� ������ �� ���� ������ character ���ڿ� ������	
}
void main() {
	//ex1();
	//ex2();
	ex3();
}