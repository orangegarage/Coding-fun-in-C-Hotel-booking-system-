#include<stdio.h>
#include<string.h>
//when I need to save data: need to pointer
//when I just need to see the things, don't use pointer
//set vs get

//å ���� (�̸�, ����, ����) ����ü ����
//å ������ �Է¹޾� �������ִ� setBookInfo()
//�װ� ����ϴ� getBookInfo()

typedef struct books{
	char title[40], author[20];
	double price;
}book;

void setBookInfo(book* b) {
	printf("å �̸�: ");
	gets_s(b->title, 40);
	printf("å ����: ");
	gets_s(b->author, 20);
	printf("å ����: ");
	scanf_s("%lf", &b->price);
	getchar(); //�׻� scanf_s ������
	printf("\n");
}

void getBookInfo(book b) {
	printf("å ����: %s\n", b.title);
	printf("����: %s\n", b.author);
	printf("����: %.2lf\n\n", b.price);
}
void bookList() {
	//å ����ü 4�� �迭 ����
	//�ݺ���, �Լ� ����ؼ� ��� Ȯ��
	book a[4];
	for (int i = 0; i < 4; i++) {
		setBookInfo(&a[i]);
	}
	printf("== å ��� ==\n");
	for (int i = 0; i < 4; i++) {
		getBookInfo(a[i]);
	}
}

void main() {
	bookList();
}