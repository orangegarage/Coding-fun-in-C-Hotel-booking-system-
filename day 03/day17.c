#include<stdio.h>
#include<string.h>
void ex1() {
	//������ ������ �迭�� �����ּ� ������
	//������ ������ = �迭��
	double arr[3] = { 1.5, 2.23, 3.9 };
	double*p = arr;//&arr[0];
	printf("%lf\n", p[0]); //==arr[0] == *(p+0) == *(arr+0) //
	printf("%lf\n", p[1]); //==arr[1] == *(p+1) == *(arr+1) //at +8 (byte 
	printf("%lf\n", p[2]); //==arr[2] == *(p + 2) == *(arr + 2) //at +16 (byte
}
//�迭�� double�� ��� arr+1�� arr���� 8����Ʈ ������ �ּ�
//�迭�� char �� ��� arr+1�� arr���� 1����Ʈ ������ �ּ�
//�迭�� int�� ��� arr+1�� arr ���� 4����Ʈ ������ �ּ�
char myStrcpy_s(char*name, int size, char*str) { //int�� �ּҰ� �ƴ�(20��° 4����Ʈ)�� �ƴ� �迭�� 20��° �ڸ�
	for (int i = 0; i < size; i++) {
		name[i] = str[i];
	}
}
void ex2() {
	char name[20] = "��ī��";
	char str[20] = "�ȳ��ϼ���";
	myStrcpy_s(name, 20, str);
	printf("name: %s\n", name);
}

//����ü Structure Types (���赵)
//�ڹٿ����� class ���� ����.
typedef struct student {
	char name[20];
	int num, kr, eng;
}stu;
void ex3() {
	stu s1 = { "����", 1, 90, 100 };
	stu s2 = { "������", 2, 98, 95 };
	stu s3 = { "�̿�ǥ", 3, 70, 92 };
	printf("%d�� / %s / ����: %d��/ ����: %d��\n", s1.num, s1.name, s1.kr, s1.eng);
	printf("%d�� / %s / ����: %d��/ ����: %d��\n", s2.num, s2.name, s2.kr, s2.eng);
	printf("%d�� / %s / ����: %d��/ ����: %d��\n", s3.num, s3.name, s3.kr, s3.eng);
}


void main() {
	//ex1();
	//ex2();
	ex3();
}