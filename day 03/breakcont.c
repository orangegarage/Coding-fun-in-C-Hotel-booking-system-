#include<stdio.h>
#include<string.h>
#include<stdlib.h>//문자열 변환, 의사 난수 생성, 동적 메모리 관리
#include<time.h>

void ex1() {
	/*
	기타제어문: return, break, continue, goto
	break: breaks out of the loop
	continue: skips to the end of the loop (still inside the loop)
	return: returns designated value (and quits the loop)
	*/
	printf("break test\n");
	for (int i = 10; i >= 1; i--) {
		if (i % 4 == 0)
			break; // 8 보이면 컷
		printf("%d\n", i);//8해서 컷을 먼저 하느냐, 8을 프린트 하고 아래에서 컷 되느냐
	}

	printf("continue test\n");
	printf("skip the numbers divisible by 4\n");
	for (int i = 1; i <= 10; i++) {
		if (i % 4 == 0) {
			continue;
		}
		printf("%d\n", i);
	}

	printf("return test\n");
	for (int i = 10; i >= 1; i--) {
		if (i % 4 == 0)
			return; // 8 보이면 컷
		printf("%d\n", i);//8해서 컷을 먼저 하느냐, 8을 프린트 하고 아래에서 컷 되느냐
	}
}

void ascii() {
	int i = 65;
aa: //마음대로 이름 붙인 label, 책갈피 역할을 한다.
	printf("%c\n", i);
	i++;
	if (i <= 'c') goto aa; //소문자 c 될때까지 책갈피로 가서 반복하게 됨.
	//goto는 다중반복문 한번에 끝낼 때 빼고는 사용하지 말자
	//흐름이 꼬일 수 있음
	//거의 죽음 (다른 언어에 업따..)
}

void random() { //include stdlibh, timeh
	//rand(), srand(), time()
	/*
	rand 랜덤값 뽑기
	srand seed random, rand의 시드값을 지정해줌
	시드값을 랜덤으로 바뀌게 해서 랜덤값을 바뀌게 한다
	time(0)/ time(NULL): 1970.1.1 자정~ 지금까지 경과한 초를 int형으로 알려줌.
	그래서 초마다 갱신 되는 시드랜덤.
	*/
	srand(time(NULL));
	int rand1 = rand() % 10 + 1; // 1~9 중 하나를 rand 에 저장
	int rand2 = rand() % 100;// 0~99 사이의 숫자 rand2에 저장
	printf("%dX%d= ?\n", rand1, rand2);
}
void game() {
	/*
	사용자가 원하는 판수 입력받고
	그 수대로 문제 출력 답을 받고
	정답/ 오답 출력
	종료 후 정답 개수 출력, 60% 이상 맞으면 win, 아니면 lose
	다시 할건가요 y/n 입력?
	*/
	int howMany, correct,ans, gostop;
	char regame[5];
	double winLose;
	correct = 0;
	winLose = 0;
	do {//루프 시작
		printf("how many times do you want to play? ");
		scanf_s("%d", &howMany);
		gostop = 0;
		for (int i = 1; i <= howMany; i++) { //판수만큼 루프돌림
			srand(time(NULL));
			int rand1 = rand() % 10 + 1; // 1~9 중 하나를 rand 에 저장
			int rand2 = rand() % 10 + 1;// 1~9 사이의 숫자 rand2에 저장
			printf("round %d: %d X %d = ", i, rand1, rand2);
			scanf_s("%d", &ans);
			if (ans == rand1*rand2) {
				printf("정답\n");
				correct++;
			}
			else
				printf("오답\n");
			//정답오답 처리 여기까지
			//여기 밖에 do while 써서 yn 입력
		}//for
		printf("당신의 성적은...\n");
		printf("맞은 문제 수: %d개, 총 판수: %d판\n", correct, howMany);
		winLose = ((double)correct / howMany) * 100; //이거 항상 0점 printf할때 주의
		printf("%.1lf점\n", winLose); //lf로 설정 해주기
		if (winLose > 60) {
			printf("Congratulations! Play again?\ny/n\n");
		}
		else if (winLose == 100) {
			printf("Perfect! Play again?\ny/n\n");
		}
		else if (winLose < 60) {
			printf("You lose! Try again?\ny/n\n");
		}
		scanf_s("%s", regame, 5);
		if (strcmp(regame ,"y")==0) {
			gostop = 1;
			correct = 0;
			howMany = 0;
		}
	} while (gostop == 1);
}
void main() {
	//ascii();
	//random();
	game();
}