#include<stdio.h>
void ex1() {
	// %d - decimal, int
	// %f - float 30 after dot �⺻�ɼ�: �Ҽ��� 6�ڸ����� �ݿø�
	// %Lf - long float 300 after dot �⺻�ɼ�: �Ҽ��� 6���� �ݿø�
	// %c - char
	// %s - String
	printf("%.9f %.5Lf \n", 0.123456789, 0.123456789); //%.5Lf, %.9f �����ν� ������ ���� ��������.
	printf("%d %d \n", 1, 2);
	printf("%c \n", 'H');
	printf("%s %s\n", "h", "hello world"); //printf ���ÿ��� �����̽� ������ �˾Ƽ� �����̽�����. �ֵ���ǥ �ȿ� �����̽� ���ص� ���˵�.
	printf("%d \n", 5 * 5 * 5 * 5 * 5 * 5); //���߿� �Է¹���� �̻��ϸ� ���ɵǳ� �̰�
	printf("%.0f", 1.0);
}
void ex2() {
	//printf("%s\n%s\n%s\n%s\n", "1. ������", "2. 19", "3. 010-1234-5678", "4. 183cm");
	printf("1. %s\n", "������");
	printf("2. %d ��\n", 19);
	printf("3. %s\n", "010-1234-5678");
	printf("4. %.2f cm\n", 181);
}
void ex3() {
	/*
	%d ���� �տ� 0 ���� 8�������� ġ�� �����ϰ� �ذ����� ���� ���� ��.
	���� 0x�� ���� 16�������� �ؼ��Ѵ�! �ű�
	����ó�� %s�� ���� �ذ��ؾ��ҵ�
	16����: 0~9,A~F(10~15) �̰� ���� �����? Hexadecimal
	2���� ���� �ʹ� ������� 16�������� ���. ���ȿ��� ���� ����? ������
	*/
	printf("%o %x \n", 177, 177);
	//\o - octane
	//\x - hexane
	printf("%d\n", 0xAF3);
}
void ex4() {
	//ASCII- American Standard Code for Information Interchange
	//7bit�̶� 2^7(128��) ���� ǥ�� ����
	//������ ��ſ� ���
	//�� ũ�� = 8bit
	printf("%d \n", 'A'); //65�� �дµ�
	printf("%c \n", 'a'); //97�� �дµ� %c�� ĳ���� �ƴѰ�? �׷� a ���
	printf("%d \n", 'a'); //�̰� 97 ����ҵ�
	printf("%d \n", '0');
	printf("%c \n", 97); //�̰� a ������
	//��� ���� ��Ŀ� ���� ����� int�ڵ带 �ְų� �׳� char�� ����ϰų��ε� int�ڵ尡 ���� ��������
	//�빮�� + 32 = �ҹ��� (26���ٰ� [\]^_` �� ������ �߰�)
}

int main() {
	//ex1(); //do example1 implementing class?
	//ex2(); //do example2
	//ex3();
	ex4();
	return 0;
}