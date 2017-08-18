#include<stdio.h>
#include<string.h>
#include<stdlib.h>//���ڿ� ��ȯ, �ǻ� ���� ����, ���� �޸� ����
#include<time.h>

void ex1() {
	/*
	��Ÿ���: return, break, continue, goto
	break: breaks out of the loop
	continue: skips to the end of the loop (still inside the loop)
	return: returns designated value (and quits the loop)
	*/
	printf("break test\n");
	for (int i = 10; i >= 1; i--) {
		if (i % 4 == 0)
			break; // 8 ���̸� ��
		printf("%d\n", i);//8�ؼ� ���� ���� �ϴ���, 8�� ����Ʈ �ϰ� �Ʒ����� �� �Ǵ���
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
			return; // 8 ���̸� ��
		printf("%d\n", i);//8�ؼ� ���� ���� �ϴ���, 8�� ����Ʈ �ϰ� �Ʒ����� �� �Ǵ���
	}
}

void ascii() {
	int i = 65;
aa: //������� �̸� ���� label, å���� ������ �Ѵ�.
	printf("%c\n", i);
	i++;
	if (i <= 'c') goto aa; //�ҹ��� c �ɶ����� å���Ƿ� ���� �ݺ��ϰ� ��.
	//goto�� ���߹ݺ��� �ѹ��� ���� �� ����� ������� ����
	//�帧�� ���� �� ����
	//���� ���� (�ٸ� �� ����..)
}

void random() { //include stdlibh, timeh
	//rand(), srand(), time()
	/*
	rand ������ �̱�
	srand seed random, rand�� �õ尪�� ��������
	�õ尪�� �������� �ٲ�� �ؼ� �������� �ٲ�� �Ѵ�
	time(0)/ time(NULL): 1970.1.1 ����~ ���ݱ��� ����� �ʸ� int������ �˷���.
	�׷��� �ʸ��� ���� �Ǵ� �õ巣��.
	*/
	srand(time(NULL));
	int rand1 = rand() % 10 + 1; // 1~9 �� �ϳ��� rand �� ����
	int rand2 = rand() % 100;// 0~99 ������ ���� rand2�� ����
	printf("%dX%d= ?\n", rand1, rand2);
}
void game() {
	/*
	����ڰ� ���ϴ� �Ǽ� �Է¹ް�
	�� ����� ���� ��� ���� �ް�
	����/ ���� ���
	���� �� ���� ���� ���, 60% �̻� ������ win, �ƴϸ� lose
	�ٽ� �Ұǰ��� y/n �Է�?
	*/
	int howMany, correct,ans, gostop;
	char regame[5];
	double winLose;
	correct = 0;
	winLose = 0;
	do {//���� ����
		printf("how many times do you want to play? ");
		scanf_s("%d", &howMany);
		gostop = 0;
		for (int i = 1; i <= howMany; i++) { //�Ǽ���ŭ ��������
			srand(time(NULL));
			int rand1 = rand() % 10 + 1; // 1~9 �� �ϳ��� rand �� ����
			int rand2 = rand() % 10 + 1;// 1~9 ������ ���� rand2�� ����
			printf("round %d: %d X %d = ", i, rand1, rand2);
			scanf_s("%d", &ans);
			if (ans == rand1*rand2) {
				printf("����\n");
				correct++;
			}
			else
				printf("����\n");
			//������� ó�� �������
			//���� �ۿ� do while �Ἥ yn �Է�
		}//for
		printf("����� ������...\n");
		printf("���� ���� ��: %d��, �� �Ǽ�: %d��\n", correct, howMany);
		winLose = ((double)correct / howMany) * 100; //�̰� �׻� 0�� printf�Ҷ� ����
		printf("%.1lf��\n", winLose); //lf�� ���� ���ֱ�
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