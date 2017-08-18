#include<stdio.h>
#include<string.h>
void ex1() {
	//포인터 변수에 배열의 시작주소 ㅅ저장
	//포인터 변수명 = 배열명
	double arr[3] = { 1.5, 2.23, 3.9 };
	double*p = arr;//&arr[0];
	printf("%lf\n", p[0]); //==arr[0] == *(p+0) == *(arr+0) //
	printf("%lf\n", p[1]); //==arr[1] == *(p+1) == *(arr+1) //at +8 (byte 
	printf("%lf\n", p[2]); //==arr[2] == *(p + 2) == *(arr + 2) //at +16 (byte
}
//배열ㅇ double인 경우 arr+1은 arr부터 8바이트 떨어진 주소
//배열이 char 인 경우 arr+1은 arr부터 1바이트 떨어진 주소
//배열이 int인 경우 arr+1은 arr 부토 4바이트 떨어진 주소
char myStrcpy_s(char*name, int size, char*str) { //int는 주소가 아닌(20번째 4바이트)가 아닌 배열의 20번째 자리
	for (int i = 0; i < size; i++) {
		name[i] = str[i];
	}
}
void ex2() {
	char name[20] = "피카츄";
	char str[20] = "안녕하세요";
	myStrcpy_s(name, 20, str);
	printf("name: %s\n", name);
}

//구조체 Structure Types (설계도)
//자바에서는 class 같은 개념.
typedef struct student {
	char name[20];
	int num, kr, eng;
}stu;
void ex3() {
	stu s1 = { "고병재", 1, 90, 100 };
	stu s2 = { "어윤수", 2, 98, 95 };
	stu s3 = { "이원표", 3, 70, 92 };
	printf("%d번 / %s / 국어: %d점/ 영어: %d점\n", s1.num, s1.name, s1.kr, s1.eng);
	printf("%d번 / %s / 국어: %d점/ 영어: %d점\n", s2.num, s2.name, s2.kr, s2.eng);
	printf("%d번 / %s / 국어: %d점/ 영어: %d점\n", s3.num, s3.name, s3.kr, s3.eng);
}


void main() {
	//ex1();
	//ex2();
	ex3();
}