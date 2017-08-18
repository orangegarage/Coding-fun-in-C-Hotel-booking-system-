#include<stdio.h>
#include<stdlib.h> //malloc(), free()
//stack vs heap
//stack: 지역, 매개
//heap: 주소로만
void ex1() { //heap
	int *p;
	p = (int*)malloc(sizeof(int));//malloc은 void기때문에 int*로 typecast 해줘야 함.
	//=malloc(4); 4byte
	//64비트 프로그램을 만들땐 인트 바이트 위험함 걔넨 8바이트라.
	//그래서 malloc 4 대신 sizeof(int) 써줘서 둘다 되게 해줌
	*p = 1004;
	printf("%d\n", p); //메모리 주소 (주소 계속 바뀜)
	printf("%d\n", *p); //1004

	//할당한 메모리 해제
	free(p);
	printf("%d\n", p);
	printf("%d\n", *p);
}

void ex2() { //making array using malloc (its size can be dynamic using sizef)
	double*arr;
	arr = (double*)malloc(sizeof(double)*3);
	arr[0] = 1.1;
	arr[1] = 1.2;
	arr[2] = 1.3;
	printf("%.2lf %.2lf %.2lf \n", arr[0], arr[1], arr[2]);
	
}

void ex3() {
	//학생 수대로 국어점수 입력받은 후
	//모든 국어점수 출력
	int num ;
	printf("학생 수: ");
	scanf_s("%d", &num);
	int* kr = (int*)malloc(num);
	for (int i = 1; i < num+1; i++) {
		printf("%d번 국어: ", i);
		scanf_s("%d", &kr[i-1]); //err. subscript requires array or pointer type
		//solve by declaring kr properly (int* not int)
	}
	printf("국어 점수 현황:\n");
	for (int i = 1; i < num+1; i++) {
		printf("%d. %d점 \n", i, kr[i-1]);
	}
}
void main() {
	//ex1();
	//ex2();
	ex3();
}