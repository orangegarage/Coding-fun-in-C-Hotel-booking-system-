#include<stdio.h>
void cases() {
	int n;
	printf("���� �ϳ� �Է��ϼ���");
	scanf_s("%d", n);
	//���ذ��� case���� �ڷ��� ��ġ�ؾ� ��.
	//case�� ���, ���Ϲ���, ������ ���� (�Ǽ�, ���ڿ�, ���� �ȵ�).
	switch (n) {
	case 1: //case 1 label: ǥ�ÿ� å����
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	case 3:
		printf("three\n");
		break;
	case 4:
		printf("four\n");
		break;
	case 5:
		printf("two\n");
	case 6: case 7:
		printf("either 6 or 7 \n");
	default:
		printf("not 1~7\n");
	}
	//���� ����ġ�� �ش� ���̽����� �� �������� ��� ��. �׷��� break �ؼ� �װŸ� �ϰ� ����.
}
void bdaySeason() {
	int month;
	printf("����� �¾�̳���?\n���ڸ� �Է����ּ���: ");
	scanf_s("%d", &month);
	switch (month){
	case 3: case 4: case 5:
		printf("��\n");
		break;
	case 6: case 7: case 8:
		printf("����\n");
		break;
	case 9: case 10: case 11:
		printf("����\n");
		break;
	case 12: case 1: case 2:
		printf("�ܿ�\n");
		break;
	default:
		printf("1~12 ������ ���ڸ� ���ּ���");
	}
	switch (month) {
	case 1:case 3: case 5:case 7:case 8: case 10:case 12: //31
		printf("%d���� 31��\n");
		break;
	case 4:case 6:case 9: case 11:
		printf("%d���� 30��\n");
		break;
	case 2:
		printf("%d���� 28��\n");
		break;
	default:
		printf("����� �� ���� ���ּ���");
	}
}

void days() {
	int month;
	printf("����� �˻��ұ��\n���ڸ� �Է����ּ���: ");
	scanf_s("%d", &month);
	switch (month){
	case 1:case 3: case 5:case 7:case 8: case 10:case 12: //31
			printf("%d���� 31��\n");
			break;
	case 4:case 6:case 9: case 11:
			printf("%d���� 30��\n");
			break;
	case 2:
			printf("%d���� 28��\n");
			break;
	default:
		printf("����� �� ���� ���ּ���");
	}
}

void looptime(){
	// 1~10 ���
	int i = 1;
	while (i <= 10){
		printf("%d\n",i);
		i++;
	}
}
void ex5() {
	int a = 1;
	int count = 0;
	while (a <= 100) {
		int i = 1;
		i = 3 * a;
		count++;
		if (count % 5 == 0) {
			printf("\n");
		}
		printf("%d ", i);
			a++;
	}
}
void ex6() {
	int a = 1;
	while (a <= 10) {
		int i = a * 8;
		printf("%d\n", i);
		a++;
	}
}
void ex7() {
	int i = 30;
	int sum = 0;
	while (i <= 100) {
		sum+=i;
		i++;
	}
	printf("%d", sum);
}
void ex8() {
	int n;
	n = 10;
	while (n!=0){
		printf("�Է�: ");
		scanf_s("%d", &n);
	}
	printf("��\n");
}
void main() {
	//cases();
	//bdaySeason();
	//days();
	//looptime();
	//ex5();
	//ex7();
	ex8();
}