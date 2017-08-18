#include<stdio.h>
void cases() {
	int n;
	printf("숫자 하나 입력하세요");
	scanf_s("%d", n);
	//기준값과 case값은 자료형 일치해야 함.
	//case는 상수, 단일문자, 정수만 가능 (실수, 문자열, 변수 안됨).
	switch (n) {
	case 1: //case 1 label: 표시용 책갈피
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
	//원래 스위치는 해당 케이스부터 쭉 내려가라 라는 말. 그래서 break 해서 그거만 하고 방지.
}
void bdaySeason() {
	int month;
	printf("몇월에 태어나셨나요?\n숫자만 입력해주세요: ");
	scanf_s("%d", &month);
	switch (month){
	case 3: case 4: case 5:
		printf("봄\n");
		break;
	case 6: case 7: case 8:
		printf("여름\n");
		break;
	case 9: case 10: case 11:
		printf("가을\n");
		break;
	case 12: case 1: case 2:
		printf("겨울\n");
		break;
	default:
		printf("1~12 사이의 숫자를 써주세요");
	}
	switch (month) {
	case 1:case 3: case 5:case 7:case 8: case 10:case 12: //31
		printf("%d월은 31일\n");
		break;
	case 4:case 6:case 9: case 11:
		printf("%d월은 30일\n");
		break;
	case 2:
		printf("%d월은 28일\n");
		break;
	default:
		printf("제대로 된 달을 써주세요");
	}
}

void days() {
	int month;
	printf("몇월을 검색할까요\n숫자만 입력해주세요: ");
	scanf_s("%d", &month);
	switch (month){
	case 1:case 3: case 5:case 7:case 8: case 10:case 12: //31
			printf("%d월은 31일\n");
			break;
	case 4:case 6:case 9: case 11:
			printf("%d월은 30일\n");
			break;
	case 2:
			printf("%d월은 28일\n");
			break;
	default:
		printf("제대로 된 달을 써주세요");
	}
}

void looptime(){
	// 1~10 출력
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
		printf("입력: ");
		scanf_s("%d", &n);
	}
	printf("끝\n");
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