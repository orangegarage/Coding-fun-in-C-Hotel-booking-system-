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

	//strcmp() = string compare ��Ʈ���� ���� �ٸ���
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

void test(){
		// 1. ���� 1���� �Է��ϰ�, 3�� �������/�ƴ��� ���
	int modSam;
	printf("input here: ");
	scanf_s("%d\n", modSam);
	if (modSam % 3 == 0) {
		printf("%d�� 3�� ���", modSam);
	}
	else {
		printf("%�� 3�� ����� �ƴ�", modSam);
	}
		// 2. �� ���� �Է� �ް�, ���� �� ���

		// 3. ���� 1���� �Է��ϰ�, 4�� ���, 7�� ���, 13�� ������� �Ǻ� 
		//    e.g. 8 => 4�� ��� 
		//        28 => 4�� ��� 7�� ���
		//         2 => 4, 7, 13�� ��� ��� �ƴ�

		// 4. ������ �Է� �ް�, ����� ���ؼ� ABCDF ���� ���
		// 90�̻� : A 
		// 80�̻� 90 �̸� : B
		// 70�̻� 80 �̸� : C
		// 60�̻� 70 �̸� : D
		// 60 �̸� : F
	}
void main() {
	//sizeFinder();
	//strings();
	//address();
	test();
}