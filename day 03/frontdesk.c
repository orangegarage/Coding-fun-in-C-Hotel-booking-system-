#include<stdio.h>
#include<stdlib.h>
void frontdesk() {
	int * hotel; // 배열명(동적할당을 위한 포인터변수)
	int num; // 방개수
	int roomNum; // 방호수
	int select; // 메뉴 선택

	printf("관리하실 방 개수를 입력 하세요...");	
	/* 동적할당 */
	scanf_s("%d", &num);
	hotel = (int*)malloc(num);
	for (int i = 0; i < num; i++) {
		hotel[i] = 0;
	}
	printf("방 개수 설정 완료! \n");
	while (1) {
		system("pause"); // 키보드 입력 받을 때까지 일시 정지
		system("cls"); // 화면 지우기 clear screen
		printf("=====호텔 관리 프로그램=====\n");
		printf("1. 체크인 \n");
		printf("2. 체크아웃 \n");
		printf("3. 객실 현황 \n");
		printf("4. 종료 \n");
		printf("입력 : ");
		scanf_s("%d", &select);
		if (select == 1) {
			/*입실하기*/
			printf("몇호실에 입실하였습니까: ");
			scanf_s("%d", &roomNum);
			if (hotel[roomNum-1] == 1) {
				printf("이미 손님이 계십니다.\n");
				printf("다른 방을 골라주십시오.\n");
			}
			else if(roomNum<=num) {
				hotel[roomNum - 1] = 1;
				printf("손님이 %d호실에 입실하셨습니다.\n", roomNum);
			}
			else {
				printf("없는 방 번호입니다.\n");
			}
		}//입실
		else if (select == 2) {
			/*퇴실하기*/
			printf("몇호실에서 퇴실을 합니까?: ");
			scanf_s("%d", &roomNum);
			if (hotel[roomNum - 1] == 0) {
				printf("이미 퇴실을 하였거나, 빈 방입니다.\n");
			}
			else if(hotel[roomNum - 1] = 1 ){
				hotel[roomNum - 1] = 0;
				printf("%d호실 손님 퇴실하셨습니다.\n", roomNum);
			}
		}//퇴실
		else if (select == 3) {
			/*목록보기*/
			printf("<객실 현황입니다>\n");
			for (int i = 0; i < num; i++) { 
				printf("%d번 방: ", i+1);
				if (hotel[i] == 1) { //roomNum 이었다면 저번에 roomNum 썼던것까지 계속 쓰는것.
					printf("사용중\n");
				}
				else{
					printf("빈 방\n");
				}//else
			}//for
		}
		else if (select == 4) {
			printf("프로그램을 종료합니다.\n");
			return;
		}
		else {
			printf("잘못된 입력. 다른 번호를 눌러주세요.\n");
		}
	}
}//frontdesk

void main() {
	frontdesk();
}