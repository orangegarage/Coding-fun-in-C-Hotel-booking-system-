#include<stdio.h>
#include<string.h>
typedef struct students {
	char name[20];
	int kr, eng;
	char grade;
}student;

void list() {
	student a[3]; //학생 구조체변수 3개 만듦
	for (int i = 0; i < 3; i++) {
		printf("학생 %d: ", i+1);
		scanf_s("%s", a[i].name, 20);
		printf("국어: ");
		scanf_s("%d", &a[i].kr);
		printf("영어: ");
		scanf_s("%d", &a[i].eng);
		double avg = (a[i].kr + a[i].eng) / 2.0;
		char calcgrade();
		a[i].grade = calcgrade(avg); //calcgrade를 void로 설정해서 하는 법이 있을까
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번 %s / %c\n", i + 1, a[i].name, a[i].grade);
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

//structure 초기화
void list2(){
	student a[4] = {
		{"피카츄",0,0,'F'},
		{"라이츄", 80, 70, 'C'},
		{"파이리", 90, 90, 'A'},
		{"잠온다", 60, 70, '65'},
	};
	for (int i = 0; i < 4; i++) {
		printf("%d번 %s / %c\n", i + 1, a[i].name, a[i].grade);
	}
}

typedef struct pokemon {
	char name[20];
	int level, hp;
}PKMN;
void setData(PKMN *p) {
	printf("name: ");
	scanf_s("%s", p->name, 20); //p* 대신 ->쓴다
	printf("level: ");
	scanf_s("%d", &p->level);
	p->hp = p->level * 100; //이렇게 바탕으로 꼭 입력받지 않아도 설정 가능하구욧
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
	getData(p3); //다 주소를 리턴하는데;; scanf 할때 %s로 해서 그럼
}


void main() {
	//list();
	//list2();
	listPKMN();
}