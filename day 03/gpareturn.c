#include<stdio.h>
/*
문제 4.
// 함수 1:
재료 : 없음
	기능 : 국어, 영어, 수학 점수 입력 받고, 평균을 구함
	반환 : 평균 점수
	// 함수 2:
	재료 : 평균 점수
	기능 : 학점 계산
	90이상 : A
	80이상 90미만 : B
	70이상 80미만 : C
	60이상 70미만 : D
	60미만 : F
	// 반환 : 학점
	// 함수 3:
	재료 : 평균 점수, 학점
	기능 : 평균 점수와 학점을 printf()로 출력

	// ex6()에서 위 3개 함수를 호출하고 학점을 출력하세요. 
*/
double gpa() {
	int kor, eng, math;
	double avg;
	printf("평균 구해드림.\n");
	printf("국어: ");
	scanf_s("%d", &kor);
	printf("수학: ");
	scanf_s("%d", &math);
	printf("영어: ");
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
	printf("점수: %.2lf\n", avg);
	printf("학점: %c\n", grade);
}
void main(){
	double avg;
	char grade;
	avg = gpa();
	grade = letterGrade(avg);
	combine(avg, grade);
}