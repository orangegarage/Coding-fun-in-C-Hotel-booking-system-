#include<stdio.h>
#include<string.h>

void sizeFinder() {
	printf("%d\n", sizeof(double)); //8
	printf("%d\n", sizeof("ABCDEF")); //7 (abcdef 6�� + null)
	int num = 10;
	printf("%d\n", sizeof(num)); //4 (int is 4 bytes)
	printf("%d\n", sizeof(num + 100)); //4 (stays an int)
	printf("%d\n", sizeof(3.14 + 10));  //8 (its a double)
	printf("%d\n", sizeof("��")); //3 (�� + null)
}
//sizeof �� ����Ʈ �� ����� �˷��ִ� ������ �Ѵ�.
//�ѱ���� �����ڵ�� �� ���ڰ� 2����Ʈ.
//ex) �� = 2����Ʈ (C���� 2���ڷ� ħ -> ���ڿ��� ħ -> �׻� �ֵ���ǥ).

//scanf_s vs gets
void strings() {
	//strcpy_s(), strcmp(), strlen()
	char name[20] = "Jin";
	printf("�����̸�: %s\n", name);
	strcpy_s(name, 20, "Sunjun");
	printf("�ٲ��̸�: %s\n", name);

	//strcmp() = string compare ��Ʈ���� ���� �ٸ��� strcmp = 0 �ϸ� .equals�� ���� ȿ�� ����
	if (strcmp(name, "Sunjun") == 0) { //��ġ�ϸ� 0, �ƴϸ� +- 1
		printf("Sunjun stop hacking my computer you bitch\n");
	}
	else {
		printf("who are you?");
	}
	//strlen(): string length, null �� ���ڿ� ����
	printf("%d bytes\n", strlen("ABC DEF")); // space ���� 7
	printf("%d bytes\n", strlen("���̿�")); //2���� 3�� �ؼ� 6
	printf("%d bytes\n", strlen("ints 12345")); //10
}

void address() {
	char address[100]; //byte �Ѿ������ ���α׷� ������
	printf("�ּ�: ");
	gets_s(address, 100);
	printf("%s�� �ֹ� �Ͻðڽ��ϱ�?\n", address);
}

void test() {
	// 1. ���� 1���� �Է��ϰ�, 3�� �������/�ƴ��� ���
	int modSam;
	printf("input here: ");
	scanf_s("%d", &modSam);
	if (modSam % 3 == 0) {
		printf("%d�� 3�� ���\n", modSam);
	}
	else {
		printf("%d�� 3�� ����� �ƴ�\n", modSam);
	}
	// 2. �� ���� �Է� �ް�, ���� �� ���
	int min, i;
	printf("�� 1: ");
	scanf_s("%d", &min);
	printf("�� 2: ");
	scanf_s("%d", &i);
	if (min > i) {
		min = i;
	}
	printf("���� ����: %d\n", min);
	// 3. ���� 1���� �Է��ϰ�, 4�� ���, 7�� ���, 13�� ������� �Ǻ� 
	//    e.g. 8 => 4�� ��� 
	//        28 => 4�� ��� 7�� ���
	//         2 => 4, 7, 13�� ��� ��� �ƴ�
	int baesoo;
	printf("���� �ϳ� ��: ");
	scanf_s("%d", &baesoo);
	if (baesoo % 4 == 0)
	printf("4�� ��� \n");
	if (baesoo % 7 == 0)
	printf("7�� ��� \n");
	if (baesoo % 13 == 0)
	printf("13�� ��� \n");
	// 4. ������ �Է� �ް�, ����� ���ؼ� ABCDF ���� ���
	// 90�̻� : A 
	// 80�̻� 90 �̸� : B
	// 70�̻� 80 �̸� : C
	// 60�̻� 70 �̸� : D
	// 60 �̸� : F
	int kr, eng, math;
	double average;
	printf("���ڸ� ���ּ���.\n");
	printf("����: ");
	scanf_s("%d", &kr);
	printf("����: ");
	scanf_s("%d", &math);
	printf("����: ");
	scanf_s("%d", &eng);
	average = (kr + eng + math) / 3.0; //3.0 �ϴ� ������ double �Ϸ���
	printf("����� �����: %d\n", average);
	if (average >= 90) {
		printf("A\n");
	}
	else if (average >= 80) {
		printf("B\n");
	}
	else if (average >= 70) {
		printf("C\n");
	}
	else if (average >= 60) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}
}
void main() {
	//sizeFinder();
	//strings();
	address();
	//test();
}