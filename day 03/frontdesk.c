#include<stdio.h>
#include<stdlib.h>
void frontdesk() {
	int * hotel; // �迭��(�����Ҵ��� ���� �����ͺ���)
	int num; // �氳��
	int roomNum; // ��ȣ��
	int select; // �޴� ����

	printf("�����Ͻ� �� ������ �Է� �ϼ���...");	
	/* �����Ҵ� */
	scanf_s("%d", &num);
	hotel = (int*)malloc(num);
	for (int i = 0; i < num; i++) {
		hotel[i] = 0;
	}
	printf("�� ���� ���� �Ϸ�! \n");
	while (1) {
		system("pause"); // Ű���� �Է� ���� ������ �Ͻ� ����
		system("cls"); // ȭ�� ����� clear screen
		printf("=====ȣ�� ���� ���α׷�=====\n");
		printf("1. üũ�� \n");
		printf("2. üũ�ƿ� \n");
		printf("3. ���� ��Ȳ \n");
		printf("4. ���� \n");
		printf("�Է� : ");
		scanf_s("%d", &select);
		if (select == 1) {
			/*�Խ��ϱ�*/
			printf("��ȣ�ǿ� �Խ��Ͽ����ϱ�: ");
			scanf_s("%d", &roomNum);
			if (hotel[roomNum-1] == 1) {
				printf("�̹� �մ��� ��ʴϴ�.\n");
				printf("�ٸ� ���� ����ֽʽÿ�.\n");
			}
			else if(roomNum<=num) {
				hotel[roomNum - 1] = 1;
				printf("�մ��� %dȣ�ǿ� �Խ��ϼ̽��ϴ�.\n", roomNum);
			}
			else {
				printf("���� �� ��ȣ�Դϴ�.\n");
			}
		}//�Խ�
		else if (select == 2) {
			/*����ϱ�*/
			printf("��ȣ�ǿ��� ����� �մϱ�?: ");
			scanf_s("%d", &roomNum);
			if (hotel[roomNum - 1] == 0) {
				printf("�̹� ����� �Ͽ��ų�, �� ���Դϴ�.\n");
			}
			else if(hotel[roomNum - 1] = 1 ){
				hotel[roomNum - 1] = 0;
				printf("%dȣ�� �մ� ����ϼ̽��ϴ�.\n", roomNum);
			}
		}//���
		else if (select == 3) {
			/*��Ϻ���*/
			printf("<���� ��Ȳ�Դϴ�>\n");
			for (int i = 0; i < num; i++) { 
				printf("%d�� ��: ", i+1);
				if (hotel[i] == 1) { //roomNum �̾��ٸ� ������ roomNum ����ͱ��� ��� ���°�.
					printf("�����\n");
				}
				else{
					printf("�� ��\n");
				}//else
			}//for
		}
		else if (select == 4) {
			printf("���α׷��� �����մϴ�.\n");
			return;
		}
		else {
			printf("�߸��� �Է�. �ٸ� ��ȣ�� �����ּ���.\n");
		}
	}
}//frontdesk

void main() {
	frontdesk();
}