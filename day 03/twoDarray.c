#include<stdio.h>

void ex1() {
	//2���� �迭: 1���� �迭 �������� �� ����
	//���ڿ� ������ �����ؾ��� ��
	//��ǥ ǥ��
	
	//�̸� 5�� ����
	char name[20]; //20����Ʈ �̸� �Ѱ�
	//20����Ʈ¥��(0~19) ���ڿ� 5�� (0~4)
	//��- row ��- column ��x�� row x column
	char names[5][20] = { "Pikachu", "Raichu", "Charmander","Squirtle","Butterfree" };
	printf("%s\n", names[0]); //���� �ּ�(only in 2d array) 1���� �迭������ �׳� �޸� ��ġ
	printf("%s\n", names[1]);
	printf("%s\n", names[2]);
	printf("%s\n", names[3]);
	printf("%s\n", names[4]);

	//int�� 4ĭ¥�� �迭 3��Ʈ �����.
	int nums[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf ("%d\n",nums[1][2]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}//������ for loop ó���� �� �ι�² ��.
	
}

void ex2() {
	int n[4][4] = { 1,2,3,4,5,6,7,8,
					9,10,11,12,13,14,15,16 }; // 4�� 4�� int
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", n[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", n[j][i]);
		}
		printf("\n");
	}
}

void arr3d() {
	//int a;
	//int a[3];
	//int a[2][3];
	int a[4][2][3]; // 3D 2x3�� 4��. �ϳ��ϳ��� ��.
	a[3][1][1] = 10;
	printf("%d\n", a[3][1][1]);
	//�ƹ��͵� ���� ������ �迭 ���� �ּҰ� ��.
	//�� int a[3];, printf a => a[0] �� �ּ� �� (�ȿ� ������ �޸𸮰� �ƴ� �ּ�)
}
void main() {
	//ex1();
	//ex2();
	arr3d();
}