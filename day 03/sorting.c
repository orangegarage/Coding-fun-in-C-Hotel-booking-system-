#include<stdio.h>
/*
arrays
*/
void ex1() {
	int kr[5]; //��ĭ
	kr[0] = 64;
	kr[1] = 30;
	kr[2] = 25;
	kr[3] = 30;
	kr[4] = 40;
	printf("%d\n", kr); // �迭�� == �迭�� ���� �ּ�
	printf("%d\n", &kr[0]); //�迭��
	printf("%d\n", kr[0]);
	//�ּ� vs����� ���� (&)
	for (int i = 0; i < 5; i++) {
		printf("%d�� ����: %d��\n", i+1, kr[i]);
	}

	//double arr[5];
	//arr[4] = 1.1;

	//float fArr[5] = { 10, 20.1,30.3, 45, 1.2 };
	//[]���� ���� �ǹ� - �����Ҷ��� ĭ ����, �� �ܿ��� ~��° index
}

void ex2() {
	//int �� �迭 8ĭ¥�� ����
	int arr[8];
	//scanf ����� ���� �Է� ����
	for (int i = 0; i < 8; i++) {
		printf("�� �������: ");
		scanf_s("%d", &arr[i]);
	}
	//40~100 ���� ���Ҹ� ���
	for (int i = 0; i < 8; i++) {
		if (arr[i] >= 40 && arr[i] <= 100) {
			printf("%d\n", arr[i]);
		}
	}
}

//�迭�� �������� �� ���̴� ������
void ex3() {
	int arr[10];
	int max, min, a;
	for (int i = 0; i < 10; i++) {
		printf("%d. �� �������: ", i+1);
		scanf_s("%d", &arr[i]);
	}// �Է� �޾Ƽ� array ����.

	//�ִ밪���
	max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("�ִ�: %d\n", max);
	//�ּڰ�
	min = arr[0];
	for (int i = 0; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("�ּ�: %d\n", min);
	//�������� ���� (���� �� -> ū ��)
	
	//bubble sort
	for (int n = 0; n < 10; n++) { //������? �� 10�� ������. �׷��� ��ȿ����.
		for (int i = 0; i < 9; i++) { //array 0���� 9���� ���� ���ϸ� �� ������ �� (10���� �ϸ� i+1�Ҷ� ����)
			if (arr[i] > arr[i + 1]) { //�ٷ� �տ����� ��
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a; //�� ������ ���� ��ġ �ٲ�
			}//bubble sort
		}
	}// first loop end
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	//Selection sort
	for (int i = 0; i < 10; i++) {
		for (int n = i; n < 10; n++) {
			if (arr[i] > arr[n]) {
				a = arr[i];
				arr[i] = arr[n];
				arr[n] = a; //��ġ �ٲ�
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	//Bubble Sort vs Selection Sort �� ������ ��Ʈ�� ����.
	// bubble sort�� ÷�� ��������� ���ؾ��ϴ� ���ڰ� �þ���� ���ϱ޼������� ���� ������ ���ڰ� �þ.
	printf("\n");
}

void main() {
	//ex1();
	ex3();
}
