#include<stdio.h>

void ex1() {
	//2차원 배열: 1차원 배열 여러개를 한 묶음
	//문자열 여러개 저장해야할 때
	//좌표 표현
	
	//이름 5개 저장
	char name[20]; //20바이트 이름 한개
	//20바이트짜리(0~19) 문자열 5개 (0~4)
	//행- row 열- column 행x열 row x column
	char names[5][20] = { "Pikachu", "Raichu", "Charmander","Squirtle","Butterfree" };
	printf("%s\n", names[0]); //시작 주소(only in 2d array) 1차원 배열에서는 그냥 메모리 위치
	printf("%s\n", names[1]);
	printf("%s\n", names[2]);
	printf("%s\n", names[3]);
	printf("%s\n", names[4]);

	//int형 4칸짜리 배열 3세트 만든다.
	int nums[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf ("%d\n",nums[1][2]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", nums[i][j]);
		}
		printf("\n");
	}//내장형 for loop 처음엔 행 두번짼 열.
	
}

void ex2() {
	int n[4][4] = { 1,2,3,4,5,6,7,8,
					9,10,11,12,13,14,15,16 }; // 4행 4열 int
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", n[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", n[j][i]);
		}
		printf("\n");
	}
}

void arr3d() {
	//int a;
	//int a[3];
	//int a[2][3];
	int a[4][2][3]; // 3D 2x3가 4개. 하나하나가 면.
	a[3][1][1] = 10;
	printf("%d\n", a[3][1][1]);
	//아무것도 쓰지 않으면 배열 시작 주소가 됨.
	//예 int a[3];, printf a => a[0] 의 주소 줌 (안에 설정한 메모리가 아닌 주소)
}
void main() {
	//ex1();
	//ex2();
	arr3d();
}