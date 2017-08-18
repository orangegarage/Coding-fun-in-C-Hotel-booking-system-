#include<stdio.h>
/*
arrays
*/
void ex1() {
	int kr[5]; //몇칸
	kr[0] = 64;
	kr[1] = 30;
	kr[2] = 25;
	kr[3] = 30;
	kr[4] = 40;
	printf("%d\n", kr); // 배열명 == 배열의 시작 주소
	printf("%d\n", &kr[0]); //배열명
	printf("%d\n", kr[0]);
	//주소 vs저장된 숫자 (&)
	for (int i = 0; i < 5; i++) {
		printf("%d번 국어: %d점\n", i+1, kr[i]);
	}

	//double arr[5];
	//arr[4] = 1.1;

	//float fArr[5] = { 10, 20.1,30.3, 45, 1.2 };
	//[]안의 숫자 의미 - 선언할때는 칸 개수, 그 외에는 ~번째 index
}

void ex2() {
	//int 형 배열 8칸짜리 선언
	int arr[8];
	//scanf 사용해 원소 입력 받음
	for (int i = 0; i < 8; i++) {
		printf("뭐 넣을까요: ");
		scanf_s("%d", &arr[i]);
	}
	//40~100 사이 원소만 출력
	for (int i = 0; i < 8; i++) {
		if (arr[i] >= 40 && arr[i] <= 100) {
			printf("%d\n", arr[i]);
		}
	}
}

//배열은 연습만이 살 길이다 깔깔깔깔깔
void ex3() {
	int arr[10];
	int max, min, a;
	for (int i = 0; i < 10; i++) {
		printf("%d. 뭐 넣을까요: ", i+1);
		scanf_s("%d", &arr[i]);
	}// 입력 받아서 array 만듦.

	//최대값출력
	max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("최대: %d\n", max);
	//최솟값
	min = arr[0];
	for (int i = 0; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("최소: %d\n", min);
	//오름차순 정렬 (작은 수 -> 큰 수)
	
	//bubble sort
	for (int n = 0; n < 10; n++) { //안전빵? 딱 10번 돌려짐. 그래서 비효율적.
		for (int i = 0; i < 9; i++) { //array 0부터 9까지 서로 비교하며 쭉 돌리는 중 (10까지 하면 i+1할때 망함)
			if (arr[i] > arr[i + 1]) { //바로 앞에꺼랑 비교
				a = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = a; //더 작으면 서로 위치 바꿈
			}//bubble sort
		}
	}// first loop end
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	//Selection sort
	for (int i = 0; i < 10; i++) {
		for (int n = i; n < 10; n++) {
			if (arr[i] > arr[n]) {
				a = arr[i];
				arr[i] = arr[n];
				arr[n] = a; //위치 바꿈
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	//Bubble Sort vs Selection Sort 는 설렉션 소트가 낫다.
	// bubble sort는 첨엔 비슷하지만 비교해야하는 숫자가 늘어날수록 기하급수적으로 루프 돌리는 숫자가 늘어남.
	printf("\n");
}

void main() {
	//ex1();
	ex3();
}
