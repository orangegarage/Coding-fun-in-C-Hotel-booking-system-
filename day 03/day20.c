#include<stdio.h>
#include<stdlib.h> //malloc(), free()
//stack vs heap
//stack: ����, �Ű�
//heap: �ּҷθ�
void ex1() { //heap
	int *p;
	p = (int*)malloc(sizeof(int));//malloc�� void�⶧���� int*�� typecast ����� ��.
	//=malloc(4); 4byte
	//64��Ʈ ���α׷��� ���鶩 ��Ʈ ����Ʈ ������ �³� 8����Ʈ��.
	//�׷��� malloc 4 ��� sizeof(int) ���༭ �Ѵ� �ǰ� ����
	*p = 1004;
	printf("%d\n", p); //�޸� �ּ� (�ּ� ��� �ٲ�)
	printf("%d\n", *p); //1004

	//�Ҵ��� �޸� ����
	free(p);
	printf("%d\n", p);
	printf("%d\n", *p);
}

void ex2() { //making array using malloc (its size can be dynamic using sizef)
	double*arr;
	arr = (double*)malloc(sizeof(double)*3);
	arr[0] = 1.1;
	arr[1] = 1.2;
	arr[2] = 1.3;
	printf("%.2lf %.2lf %.2lf \n", arr[0], arr[1], arr[2]);
	
}

void ex3() {
	//�л� ����� �������� �Է¹��� ��
	//��� �������� ���
	int num ;
	printf("�л� ��: ");
	scanf_s("%d", &num);
	int* kr = (int*)malloc(num);
	for (int i = 1; i < num+1; i++) {
		printf("%d�� ����: ", i);
		scanf_s("%d", &kr[i-1]); //err. subscript requires array or pointer type
		//solve by declaring kr properly (int* not int)
	}
	printf("���� ���� ��Ȳ:\n");
	for (int i = 1; i < num+1; i++) {
		printf("%d. %d�� \n", i, kr[i-1]);
	}
}
void main() {
	//ex1();
	//ex2();
	ex3();
}