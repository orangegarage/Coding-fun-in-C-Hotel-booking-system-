#include<stdio.h>
void ex1() {
	//자료형 Data Type 구분 (int float long double char string)	
	int radius=5;
	double pi=3.14;
	double area = radius*radius*pi;
	printf("반지름: %d\n", radius);
	printf("넓이: %.2lf\n" ,area);
	radius = 10;
	area = radius*radius*pi; // 원래 변수 안바꿔서 area 다시 계산 안되어서 여기서 수동으로 해야함
	printf("변경 후 반지름은 %d이고 넓이는 %.2lf이다.", radius, area);
	//변수 선언: declaring variable (자료형 변수명 ex int radius;)
	//변수 초기화 : initializing variable 최초로 데이터 변수에 지정. 지정 안하면 쓰레기값 되고 못씀
	//변수 호출: calling variable 값 보기.
}

void ex2() {
	//int 변수 3개
	int length, width, height;
	//이니셜의 아스키 코드값 저장, 출력
	printf("My initial: %c.%c.\n", 74, 74);
	printf("in ASCII: %d.%d.\n", 'J','J');
	//내 키 double에 저장 후 출력
	double myHeight= 182.2;
	printf("My height is: %.1lfcm\n", myHeight);
	//3. 밑변 3, 높이 4인 삼각형의 넓이를 변수 활용 저장 후 출력
	width = 3;
	height = 4;
	double area = (width*height)/2;
	printf("밑변: %d\n높이: %d\n너비: %.1lf\n", width, height, area);
}
void ex3() {
	//문자열 array
	char s[7] = "피카츄"; //"ㅍㅣㅋㅏㅊㅠ" 0~7 나중엔 max string length 같은걸로 지정하면 편할듯
	printf("%s\n", s);
	//String 을 직접 선언할 수 없네 무조건 character 문자열 가야함	
}
void main() {
	//ex1();
	//ex2();
	ex3();
}