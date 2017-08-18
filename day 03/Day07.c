#include<stdio.h>
#include<string.h>

void sizeFinder() {
	printf("%d\n", sizeof(double)); //8
	printf("%d\n", sizeof("ABCDEF")); //7 (abcdef 6개 + null)
	int num = 10;
	printf("%d\n", sizeof(num)); //4 (int is 4 bytes)
	printf("%d\n", sizeof(num + 100)); //4 (stays an int)
	printf("%d\n", sizeof(3.14 + 10));  //8 (its a double)
	printf("%d\n", sizeof("ㄱ")); //3 (ㄱ + null)
}
//sizeof 는 바이트 가 몇갠지를 알려주는 역할을 한다.
//한국어는 유니코드라 한 글자가 2바이트.
//ex) ㄱ = 2바이트 (C언어에선 2글자로 침 -> 문자열로 침 -> 항상 쌍따옴표).

//scanf_s vs gets
void strings() {
	//strcpy_s(), strcmp(), strlen()
	char name[20] = "Jin";
	printf("원래이름: %s\n", name);
	strcpy_s(name, 20, "Sunjun");
	printf("바뀐이름: %s\n", name);

	//strcmp() = string compare 스트링이 같냐 다르냐
	if (strcmp(name, "Sunjun") == 0) { //일치하면 0, 아니면 +- 1
		printf("Sunjun stop hacking my computer you bitch\n");
	}
	else {
		printf("who are you?");
	}
	//strlen(): string length, null 뺀 문자열 길이
	printf("%d bytes\n", strlen("ABC DEF")); // space 포함 7
	printf("%d bytes\n", strlen("하이용")); //2개가 3개 해서 6
	printf("%d bytes\n", strlen("ints 12345")); //10
}

void address() {
	char address[100]; //byte 넘어버리면 프로그램 에러남
	printf("주소: ");
	gets_s(address, 100);
	printf("%s로 주문 하시겠습니까?\n", address);
}

void test(){
		// 1. 정수 1개를 입력하고, 3의 배수인지/아닌지 출력
	int modSam;
	printf("input here: ");
	scanf_s("%d\n", modSam);
	if (modSam % 3 == 0) {
		printf("%d는 3의 배수", modSam);
	}
	else {
		printf("%는 3의 배수가 아님", modSam);
	}
		// 2. 두 수를 입력 받고, 작은 수 출력

		// 3. 정수 1개를 입력하고, 4의 배수, 7의 배수, 13의 배수인지 판별 
		//    e.g. 8 => 4의 배수 
		//        28 => 4의 배수 7의 배수
		//         2 => 4, 7, 13의 배수 모두 아님

		// 4. 국영수 입력 받고, 평균을 구해서 ABCDF 학점 출력
		// 90이상 : A 
		// 80이상 90 미만 : B
		// 70이상 80 미만 : C
		// 60이상 70 미만 : D
		// 60 미만 : F
	}
void main() {
	//sizeFinder();
	//strings();
	//address();
	test();
}