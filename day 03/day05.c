#include<stdio.h>
/*
변수 작명 규칙

숫자로 시작 ㄴㄴ
중복이름 ㄴㄴ
띄워쓰기 ㄴㄴ
특수기호 _아니면$
한글 ㅇㅋ
예약어 (int double etc) 는 변수명으로 지정 앙대
*/
void ex1() {
//키보드 입력
	//scanf_s(); scan format secure 하지만 띄워쓰기 안됨
	char name[20];
	int age;
	double height;
	char address[100];
	printf("이름: ");
	scanf_s("%s", name, 20);
	printf("나이: ");
	scanf_s("%d", &age); //why and?
	printf("키: ");
	scanf_s("%lf", &height);
	printf("주소: ");
	scanf_s("%s", address, 100);
	printf("이름: %s\n나이: %d\n키: %.1lf\n주소: %s\n", name, age, height, address);
}

void ex2() {
	char name[20];
	char young[50] = "아직 젊으시네요";
	char medium[50] = "저랑 나이차가 좀 나시네요.";
	char old[30] = "아... 아재요...";
	int age, futureAge;
		printf("이름이 뭐예요?: ");
		scanf_s("%s", name,20);
		printf("나이: ");
		scanf_s("%d", &age);
		futureAge = age + 3;
		printf("당신은 3년 후엔... %d살이 됩니다.\n", futureAge);
	if (futureAge <= 25) {
		printf("%s형은 %s\n",name, young);
	}
	if (age > 22 && age < 30) {
		printf("%s형은 %s\n",name, medium);
	}
	if (age >= 30) {
		printf("%s\n", old);
	}
}

void ex3() {
	//Constant 상수
	/*
	making a symbolic constant
	1. 변수 앞에 const 붙인다 
	ex) const double PI = 3.14;
	2. #define
	ex) #define PI 3.14
	*/
#define GOLDRAIN 1.618 //; 붙이지 마랏
	printf("황금비: %.3lf\n", GOLDRAIN);
}

void main() {
	//ex1();
	//ex2();
	//ex3();
}
