#include <stdio.h>
/*
���ȣ��: �ڽ��� �����ϴ� �� Recursion
https://www.inf.ethz.ch/personal/gonnet/DarwinManual/node72.html
*/
int factorial(int n) {
	if (n == 1)
		return n;
	return n*factorial(n - 1);//�ڱ�� ������ ����. �ݺ���ó�� �Ǵ°� �ƴ϶� �Լ��� �ϳ� �����Ǿ ����Ǵ� ��.
}
void main() {
	int num;
	printf("���� �ϳ� �Է��ϼ���: ");
	scanf_s("%d", &num);
	int res = factorial(num);
	printf("%d! = %d\n", num, res);
}