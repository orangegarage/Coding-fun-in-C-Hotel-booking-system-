#include<stdio.h>
#include<string.h>
//when I need to save data: need to pointer
//when I just need to see the things, don't use pointer
//set vs get

//책 정보 (이름, 저자, 가격) 구조체 정의
//책 정보를 입력받아 저장해주는 setBookInfo()
//그걸 출력하는 getBookInfo()

typedef struct books{
	char title[40], author[20];
	double price;
}book;

void setBookInfo(book* b) {
	printf("책 이름: ");
	gets_s(b->title, 40);
	printf("책 저자: ");
	gets_s(b->author, 20);
	printf("책 가격: ");
	scanf_s("%lf", &b->price);
	getchar(); //항상 scanf_s 다음에
	printf("\n");
}

void getBookInfo(book b) {
	printf("책 제목: %s\n", b.title);
	printf("저자: %s\n", b.author);
	printf("가격: %.2lf\n\n", b.price);
}
void bookList() {
	//책 구조체 4개 배열 선언
	//반복문, 함수 사용해서 결과 확인
	book a[4];
	for (int i = 0; i < 4; i++) {
		setBookInfo(&a[i]);
	}
	printf("== 책 목록 ==\n");
	for (int i = 0; i < 4; i++) {
		getBookInfo(a[i]);
	}
}

void main() {
	bookList();
}