#include<stdio.h>
void ex1() {
	// %d - decimal, int
	// %f - float 30 after dot 기본옵션: 소숫점 6자리까지 반올림
	// %Lf - long float 300 after dot 기본옵션: 소숫점 6까지 반올림
	// %c - char
	// %s - String
	printf("%.9f %.5Lf \n", 0.123456789, 0.123456789); //%.5Lf, %.9f 함으로써 어디까지 할지 지정해줌.
	printf("%d %d \n", 1, 2);
	printf("%c \n", 'H');
	printf("%s %s\n", "h", "hello world"); //printf 세팅에서 스페이스 누르면 알아서 스페이스해줌. 쌍따옴표 안에 스페이스 안해도 포맷됨.
	printf("%d \n", 5 * 5 * 5 * 5 * 5 * 5); //나중에 입력방식이 이상하면 어케되냐 이거
	printf("%.0f", 1.0);
}
void ex2() {
	//printf("%s\n%s\n%s\n%s\n", "1. 정진용", "2. 19", "3. 010-1234-5678", "4. 183cm");
	printf("1. %s\n", "정진용");
	printf("2. %d 살\n", 19);
	printf("3. %s\n", "010-1234-5678");
	printf("4. %.2f cm\n", 181);
}
void ex3() {
	/*
	%d 포맷 앞에 0 오면 8진법으로 치기 시작하고 해결방안은 딱히 없는 듯.
	만일 0x를 쓰면 16진법으로 해석한다! 신기
	연락처는 %s로 돌려 해결해야할듯
	16진법: 0~9,A~F(10~15) 이거 많이 사용함? Hexadecimal
	2진수 쓰면 너무 길어져서 16진법으로 대신. 보안에서 많이 쓴다? 리버싱
	*/
	printf("%o %x \n", 177, 177);
	//\o - octane
	//\x - hexane
	printf("%d\n", 0xAF3);
}
void ex4() {
	//ASCII- American Standard Code for Information Interchange
	//7bit이라 2^7(128개) 문자 표현 가능
	//데이터 통신에 사용
	//총 크기 = 8bit
	printf("%d \n", 'A'); //65로 읽는데
	printf("%c \n", 'a'); //97로 읽는데 %c는 캐릭터 아닌가? 그럼 a 출력
	printf("%d \n", 'a'); //이건 97 출력할듯
	printf("%d \n", '0');
	printf("%c \n", 97); //이건 a 나오나
	//출력 지시 방식에 따라 내장된 int코드를 주거나 그냥 char로 출력하거나인데 int코드가 무슨 기준이지
	//대문자 + 32 = 소문자 (26에다가 [\]^_` 이 여섯개 추가)
}

int main() {
	//ex1(); //do example1 implementing class?
	//ex2(); //do example2
	//ex3();
	ex4();
	return 0;
}