#include<stdio.h>
#include<string.h>
void ex1() {
	// do while loop
	int n = 1000;
	while (n != 1000) {
		printf("while loop gogosing \n");
	}

	do {
		printf("do while loop gogosing \n");
	} while (n != 1000);
}

void ex2() {
	//for loop
	int count = 0;
	for (int i = 0; i < 10; i++) {
		count++;
		printf("%d ", count);
	}
}
//범위 알면 for 모르면 while 정도

void by3() {
	int n = 3;
	for (int i = 1; i < 11; i++) {
		printf("%d ", n*i);
	}
}
void multiple() {
	int count = 1;
	for (int n = 0; n < 10000; n++) {
		if (n % 11 == 0 && n % 13 == 0) {
			printf("%d ", n);
			count++;
		}
		n++;
		if (count % 6 == 0) {
			printf("\n");
			count = 1;
		}
		
	}
}
void calendar() {
	printf("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n");
		printf("\t\t\t\t1\t2\t3\n");
		int count = 0;
		for (int day = 4; day < 31; day++) {
			printf("%d\t", day); //탭ㄱ
				count++;
				if (count % 7 == 0) {
					printf("\n"); //7마다 줄바꾸기
					count = 0;//리셋
				}// if else
		} //for loop
		printf("\n");
}

//double for loop
void ex3() {
	for (int i = 0; i < 3; i++) {
		for (int n = 0; n < 5; n++) {
			printf("second for loop\n");
		}
		printf("here's first for loop\n");
	}
}
void main() {
	//ex2();
	//by3();
	//multiple();
	//calendar();
	ex3();
}
