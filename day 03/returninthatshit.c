#include<stdio.h>
double PI = 3.14;

void add(int a, int b, int c) { //함수 정의 시작 abc parameter
	printf("%d, %d, %d 세 수의 합은 %d 입니다.\n", a, b, c, a + b + c);
} //함수 정의 끝

double circle() {
	int r;
	printf("반지름: ");
	scanf_s("%d", &r);
	return r*r*PI; //return하면 출력 안해준다 꼭 main에서 printf 써서 출력해줘야하는듯
}
int plus(int aa, int bb) {
	int total;
	total = aa + bb;
	return total;
}

/*
scanf 통해 문자 하나 입력받고 이 문자를 리턴하는 함수 정의
인자값으로 문자 1개를 받고, 대문자면 소문자를, 소문자면 대문자를 출력하는 함수 정의(아스키 쓰면 되나)
두 함수를 모두 호출하고, 정상적으로 실행하도록 코드를 작성하세요.
*/

const char* returnChar() { //why const char https://stackoverflow.com/questions/1496313/returning-c-string-from-a-function
	char chara[4];
	printf("문자 하나 입력하세요: ");
	scanf_s("%s", chara, 4);
	return chara;
}

void capLow() {
	char c;//[] 쓰면 문자열 되니까 그냥 char로 유지시키자
	printf("2. 문자 하나 입력하세요: ");
	//이거 이후에 scanf를 안달림
	getchar(); //\n 먹음
	scanf_s("%c", &c, 4); //\n 건너뛰고 인식해라 하고 싶으면 getchar(); 대신 (" %c") 해도 되더라
	if (c <'Z'&& c>'A') {
		printf("대문자 -> 소문자 ");
		c += 32;
		printf("%c\n", c);
	}
	else if (c >= 'a') {
		printf("소문자 -> 대문자 ");
		c -= 32;
		printf("%c\n", c);
	}
}

void main() {
	printf("입력하신 문자: %s\n",returnChar());
	capLow();
	
	
	//add(10,20,5); //함수 호출
	/*
	printf("원의 넓이: %.2lf\n", circle()); //바로 print
	double circle1 = circle(); //새롭게 설정을 해보자. 반지름 설정 (후 넓이 계산 완료 후 circle1에 넣음. 프린트는 안함)
	printf("원1의 넓이: %.2lf\n", circle1); //circle1을 불러 프린트
	
	int a, b;
	printf("숫자 2개를 입력해 주세요:\n");
	scanf_s("%d",  &a);
	printf("그리고\n");
	scanf_s("%d", &b);
	printf("더하면: %d\n", plus(a, b));
	*/
}

/*
return:
1. 종료하라
2. 호출된 자리로 돌아가라
3. 반환값이 있으면 그 값을 호출된 자리로 넣어라
*/
//**프로그램은 언제나 메인함수부터 실행
//strcpy scanf_s printf 다 함수
//**if else 제외 소괄호 붙으면 함수, 대괄호 붙으면 배열, 암것도 안붙어있으면 변수