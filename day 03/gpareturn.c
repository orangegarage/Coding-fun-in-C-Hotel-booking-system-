#include<stdio.h>
/*
���� 4.
// �Լ� 1:
��� : ����
	��� : ����, ����, ���� ���� �Է� �ް�, ����� ����
	��ȯ : ��� ����
	// �Լ� 2:
	��� : ��� ����
	��� : ���� ���
	90�̻� : A
	80�̻� 90�̸� : B
	70�̻� 80�̸� : C
	60�̻� 70�̸� : D
	60�̸� : F
	// ��ȯ : ����
	// �Լ� 3:
	��� : ��� ����, ����
	��� : ��� ������ ������ printf()�� ���

	// ex6()���� �� 3�� �Լ��� ȣ���ϰ� ������ ����ϼ���. 
*/
double gpa() {
	int kor, eng, math;
	double avg;
	printf("��� ���ص帲.\n");
	printf("����: ");
	scanf_s("%d", &kor);
	printf("����: ");
	scanf_s("%d", &math);
	printf("����: ");
	scanf_s("%d", &eng);
	avg = (kor + math + eng) / 3.0;
	return avg;
}

char letterGrade(int i) {
	if (i >= 90) {
		return 'A';
	}
	else if (i < 90 && i>=80) {
		return 'B';
	}
	else if (i < 80 && i >= 70) {
		return 'C';
	}
	else if (i < 70 && i >= 60) {
		return 'D';
	}
	return 'F';
}

void combine(double avg, char grade) {
	printf("����: %.2lf\n", avg);
	printf("����: %c\n", grade);
}
void main(){
	double avg;
	char grade;
	avg = gpa();
	grade = letterGrade(avg);
	combine(avg, grade);
}