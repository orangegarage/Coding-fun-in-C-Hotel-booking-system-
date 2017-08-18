#include<stdio.h>
#include<string.h>
typedef struct students {
	char name[20];
	int kr, eng;
	char grade;
}student;

void list() {
	student a[3]; //�л� ����ü���� 3�� ����
	for (int i = 0; i < 3; i++) {
		printf("�л� %d: ", i+1);
		scanf_s("%s", a[i].name, 20);
		printf("����: ");
		scanf_s("%d", &a[i].kr);
		printf("����: ");
		scanf_s("%d", &a[i].eng);
		double avg = (a[i].kr + a[i].eng) / 2.0;
		char calcgrade();
		a[i].grade = calcgrade(avg); //calcgrade�� void�� �����ؼ� �ϴ� ���� ������
	}
	for (int i = 0; i < 3; i++) {
		printf("%d�� %s / %c\n", i + 1, a[i].name, a[i].grade);
	}
}

char calcgrade(double avg) {
	if (avg >= 90) {
		return 'A';
	}
	else if (avg < 90 && avg >= 80) {
		return 'B';
	}
	else if (avg < 80 && avg >= 70) {
		return 'C';
	}
	else if (avg < 70 && avg >= 60) {
		return 'D';
	}
	return 'F';
}

//structure �ʱ�ȭ
void list2(){
	student a[4] = {
		{"��ī��",0,0,'F'},
		{"������", 80, 70, 'C'},
		{"���̸�", 90, 90, 'A'},
		{"��´�", 60, 70, '65'},
	};
	for (int i = 0; i < 4; i++) {
		printf("%d�� %s / %c\n", i + 1, a[i].name, a[i].grade);
	}
}

typedef struct pokemon {
	char name[20];
	int level, hp;
}PKMN;
void setData(PKMN *p) {
	printf("name: ");
	scanf_s("%s", p->name, 20); //p* ��� ->����
	printf("level: ");
	scanf_s("%d", &p->level);
	p->hp = p->level * 100; //�̷��� �������� �� �Է¹��� �ʾƵ� ���� �����ϱ���
	printf("\n");
}
void getData(PKMN p) {
	printf("=== Your Pokemon ===\n");
	printf("name: %s\n", p.name);
	printf("lv. %d / hp - %d\n\n", p.level, p.hp);
}

void listPKMN() {
	PKMN p1, p2, p3;
	setData(&p1);
	setData(&p2);
	setData(&p3);
	getData(p1);
	getData(p2);
	getData(p3); //�� �ּҸ� �����ϴµ�;; scanf �Ҷ� %s�� �ؼ� �׷�
}


void main() {
	//list();
	//list2();
	listPKMN();
}