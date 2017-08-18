#include<stdio.h>

void change(int* n1, int* n2) {
	int tmp = *n1; //saving pointer value in memory
	*n1 = *n2; //포인터 밸류들 변경
	*n2 = tmp; //saving pointer value as address?
	//array 쓰면 기억하냐
}

/*
변수 이름으로 접근할 수 없는 경우
- 외부 함수 소속의 변수/배열
- 동적할당 메모리
- 램 이외의 메모리
=> 위치 주소를 통해 찾아가야 한다.
---------------------------------
메모리 - 그릇
데이터 - 전기신호
주소 - 1바이트 당 1번지. 0번지 약 42억 32비트 길이의 양수
주소엔 데이터 저장 불가.
RAM 특징
	같은 변수라도 프로그램을 실행 할 때마다 다른 위치에 할당.

*/
void switcheroo () {
	int n1, n2;
	printf("정수 1: ");
	scanf_s("%d", &n1);
	printf("정수 2: ");
	scanf_s("%d", &n2);
	printf("변환 전: %d %d \n", n1, n2);
	change(&n1, &n2);
	printf("변환 후: %d %d \n", n1, n2); //이 코드 안되는 코드임 다른 함수에 저장한 n1 n2 이미 까먹어 버려서
	//그래서 포인터값을 가지고 와서 성공적.
}

void ex2() {
	int a = 10;
	printf("%d \n", a);
	printf("%d \n", &a); //주소	
}
/*
int * pa 인트형으로 가져와라
double * pa 더블형으로 가져와라
*/

void ex3() {
	int a = 100; //actual variable declaration
	//포인터변수를 1개 만들어서 그걸 사용해서 a를 1004로 바꾸자.
	// 포인터 변수 사용ㅇ법
	/*
	주소 메모장 준비 (포인터 변수 선언)
	메모장에 주소 적기 (주소 저장)
	찾아가라고 지시하기 (포인터 연산자)
	*/
	int * p; //pointer var declaration
	p = &a; // storing address of a in pointer var
	printf("변수 a의 주소: %d\n", &a);
	printf("p에 저장된 주소: %d\n", p);
	printf("포인터를 사용해 변수를 꺼내보겠습니다: %d\n", *p);
	*p = 1004; // 변경 (메모리)
	printf("포인터를 변경하고 변수를 꺼내보겠습니다: %d\n", a);
}

void setData(char*name, int*kr, int*eng, double*avg, char*grade) {
	printf("이름: ");
	scanf_s("%s", name, 20);
	printf("국어점수: ");
	scanf_s("%d", kr); //주소에 저장 (&는 메모리에 저장하기 위함
	printf("영어점수: ");
	scanf_s("%d", eng);
	*avg = (*eng + *kr) / 2.0; //이 부분에서 에러가 난다 왜일까
		if (*avg >= 90) {
			*grade = 'A';
		}
		else if (*avg < 90 && *avg >= 80) {
			*grade = 'B';
		}
		else if (*avg < 80 && *avg >= 70) {
			*grade = 'C';
		}
		else if (*avg < 70 && *avg >= 60) {
			*grade = 'D';
		}
		else *grade = 'F';
}

void ex4() {
	char name[20];
	int kr, eng;
	double avg;
	char grade;
	setData(name, &kr, &eng, &avg, &grade);
	printf("\n학생 정보를 드리겠습니다:\n");
	printf("이름: %s\n국어성적: %d\n영어성적: %d\n평균점수: %.2lf\n알파벳성적: %c\n",name, kr, eng, avg, grade);
}
void main() {
	//ex3();
	//switcheroo();
	ex4();
}