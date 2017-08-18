#include<stdio.h>
void ex1() {
	//배열 초기화 방법
	//int a[] = { 1,2,3 };// 원소에 맞게 3칸 자동 생성
	//int a[5] = { 10 }; // a[0]에 10 저장, 나머지 4칸은 모두 0으로 초기화
	int a[][2] = { 1,2,3,4,5,6 }; //3 rows 2 column 자동 생성

	//다차원 배열은 실제로 1줄로 쭉 생성됨.
	//그래서 행렬 구분 안하고 그냥 for 문 하나 써도 됨 (row 다 0으로 해버리고)
}

void newYearDates() {
	int year[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int month, date, totalDate;
	totalDate = 0;
	//입력 받은 날 format 월/일 (no space) 부터 총 며칠
	//1/1 부터 12/31까지는 총 364일
	//기본 a
	printf("월: ");
	scanf_s("%d", &month);
	printf("일: ");
	scanf_s("%d", &date);
	printf("1월 1일부터 %d월 %d일까지: ", month,date);
	for (int i = 0; i < month; i++)
		totalDate += year[i];
		totalDate-=(1-date);
	printf("%d일", totalDate);
}
//5명 학생의 이름, 영어 점수 저장할 수 있는 배열 선언 후
//학생의 이름과 점수 입력 받고 출력하고 평균 구한다.

void grades() {
	char names[5][20];
	int grades[5];
	int total, avg;
	for (int i = 0; i < 5; i++) {
		printf("이름: ");
		scanf_s("%s", names[i]);
		printf("성적: ");
		scanf_s("%d", &grades[i]);
	}
	for (int i = 0; i < 5; i++) {
		total += grades[i];
		printf("%d. %s: %d점\n",i+1, names[i], grades[i]);
	}
	avg = total / 5;
	printf("5명 총 평균 %d점\n", avg);
}

	/*
	변수 종류와 범위
	1.지역변수 //local variable
		-선언: 중괄호 안에
		-범위: 그 중괄호 안에서만
		-해제: 중괄호 밖으로 나가면 효과가 사라짐

	2.전역변수 //global variable
		-선언: 중괄호 밖, 소스파일 상단
		-범위: 소스파일 .c 전체 영역
		-해제: 프로그램 종료.
		**남발하면 안되고 중요한 데이터만 전역변수로.

	3.정적변수 //static variable
		-선언: 영역은 상관없고, 쓸때 앞에 static이란 단어를 씀
		-범위: 자신이 속한 영역(전역으로 선언되면 소스파일, 지역으로 선언되면 그 영역)
		-해제: 프로그램이 종료되면 사라짐
		**영역이 끝나도 사라지지 않아서, 데이터 보존이 필요할때 사용
		**선언부 반복되면 최초 1회만 실행, 그 이후는 건너뜀
		**전역변수 대용으로 사용.

	4.매개변수 //parameter
		-선언: 함수 정의 시 소괄호 내부에 선언
		-범위: 그 함수 내부
		-해제: 함수가 return되면 사라짐
		**함수가 실행되면 만들어진다
	*/

int a = 100;
void ex3() {
	int a = 10;
	{
		int a = 20;
		int b = 1004;
		printf("%d\n", a);
		printf("%d\n", b);
	}
	printf("%d\n", a);
}
void ex4() {
	printf("%d\n", a);
}

void ex5() {
	printf("지역변수 test\n");
	for (int i = 0; i < 5; i++) {
		int a = 0;
		printf("%d\n", a);
		a++; //이거 아무리 늘려봤자 루프 돌리면서 다시 0될듯
	}
	printf("\n");
	printf("static var test\n");
	for (int i = 0; i < 5; i++) {
		static int a = 0; //한번 세팅 한 후에 무시
		printf("%d \n", a);
		a++;
	}
}
void main() {//메인함수
	//ex1();
	//newYearDates();
	//grades();
	/*
	ex3();
	ex4();
	*/
	ex5();
}