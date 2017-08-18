#include <stdio.h>
/*
재귀호출: 자신을 실행하는 것 Recursion
https://www.inf.ethz.ch/personal/gonnet/DarwinManual/node72.html
*/
int factorial(int n) {
	if (n == 1)
		return n;
	return n*factorial(n - 1);//자기랑 같은걸 실행. 반복문처럼 되는게 아니라 함수가 하나 복제되어서 실행되는 것.
}
void main() {
	int num;
	printf("정수 하나 입력하세요: ");
	scanf_s("%d", &num);
	int res = factorial(num);
	printf("%d! = %d\n", num, res);
}