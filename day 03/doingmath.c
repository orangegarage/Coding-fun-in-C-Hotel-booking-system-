#include <stdio.h>
#include <stdbool.h>
void day06() {
	/*
	연산자
	+ - * / */
	//한번에 하나씩
	//+=*=/=%=
	//나누기는 정수/정수 하면 정수밖에 안나온다. whyyyy
	//% = mod = 나머지
	printf("%d\n", 10 % 4); // 2
	printf("%d\n", 2 % 4); //0

	int score = 0;
	score++; //1
	printf("점수: %d\n", score);
	score += 1; // 1+1 = 2
	printf("점수: %d\n", score);
	score += 10; // 2+10 = 12
	printf("점수: %d\n", score);
	score /= 2; // 12/2 = 6
	printf("점수: %d\n", score);
	score *= 3;//6*3=18
	printf("점수: %d\n", score);
	score = 0;
	printf("점수: %d\n", score);
}

void ex2() {
	// 증감연산자 ++ --
	int score = 10;
	score++; //11
	printf("점수: %d\n", score);
	++score; // 12
	printf("점수: %d\n", score);
	score--; //11
	printf("점수: %d\n", score);
	--score;//10
	printf("점수: %d\n", score);
}
void ex3() {
	// i++ vs ++i?
	int i = 0;
	int j = i+1; // 그냥 간단한 j가 i보다 i 크다. i는 여전히 0임. 이거 다음에 i++해주면 i가 바뀌겠지
	printf("i: %d j:%d\n", i, j);
	printf("i: %d\n", i);
	i = 0;
	j = i++; // j = i 먼저 되어서 j=0, 그 다음 ++ 적용, i는 1로 바뀜
	printf("i: %d j:%d\n", i, j);
	printf("i: %d\n", i);
	printf("j: %d\n", j);
	i = 0;
	j = ++i; //j 가 i보다 ++를 먼저 만나서 i랑 만날땐 이미 i가 계산이 된 후. i도 바뀜
	printf("i: %d j:%d\n", i, j);
}
void greatThan() {
	// <, <=, >, >=, ==, !=
	//printf("%d\n", 17 % 3 == 0);
	int a = 0;
	printf("%d\n", a == 0);// 거짓
	printf("%d\n", !a); // a가 0인가요? 라는 뜻 하지만 a==0 보다 빠름
}

void ageTest() {
	int age;
	printf("당신의 나이: ");
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인입니다\n");
	}
	else if (age > 13) {
		printf("청소년이시네요\n");
	}
	else
	printf("어린이 입니다.\n");
}
void ex6() {
	// 조건식 ? 참일때 : 거짓일때
	int age;
	printf("나이가 몇살인가요: ");
	scanf_s("%d", &age);
	printf(age >= 20 ? "성인\n" : "미자\n");
}

void oddEven() {
	int i;
	printf("숫자를 하나 고르세요: ");
	scanf_s("%d", &i);
	printf("고르신 숫자 %d는(은) ", i);
	printf(i%2==0 ? "짝수입니다\n" : "홀수입니다\n");
}

void casting() {
	//형 변환 (casting a type)
	//자동 형변환 (auto casting)
	//강제 형변환 (force casting)
	double a = 100.9;
	printf("%d\n", (int)a); // a is typecasted to int
	//typecasting to double?
	//bitwise operations int short long 에서만 사용 가능
}


void main() {
	//day06();
	//ex2();
	//ex3();
	//greatThan();
	//ageTest();
	//ex6();
	//oddEven();
}