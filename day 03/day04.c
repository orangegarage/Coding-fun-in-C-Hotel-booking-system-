#include<stdio.h>
void ex1() {
	//切戟莫 Data Type 姥歳 (int float long double char string)	
	int radius=5;
	double pi=3.14;
	double area = radius*radius*pi;
	printf("鋼走硯: %d\n", radius);
	printf("覚戚: %.2lf\n" ,area);
	radius = 10;
	area = radius*radius*pi; // 据掘 痕呪 照郊蚊辞 area 陥獣 域至 照鞠嬢辞 食奄辞 呪疑生稽 背醤敗
	printf("痕井 板 鋼走硯精 %d戚壱 覚戚澗 %.2lf戚陥.", radius, area);
	//痕呪 識情: declaring variable (切戟莫 痕呪誤 ex int radius;)
	//痕呪 段奄鉢 : initializing variable 置段稽 汽戚斗 痕呪拭 走舛. 走舛 照馬檎 床傾奄葵 鞠壱 公掌
	//痕呪 硲窒: calling variable 葵 左奄.
}

void ex2() {
	//int 痕呪 3鯵
	int length, width, height;
	//戚艦屡税 焼什徹 坪球葵 煽舌, 窒径
	printf("My initial: %c.%c.\n", 74, 74);
	printf("in ASCII: %d.%d.\n", 'J','J');
	//鎧 徹 double拭 煽舌 板 窒径
	double myHeight= 182.2;
	printf("My height is: %.1lfcm\n", myHeight);
	//3. 購痕 3, 株戚 4昔 誌唖莫税 覚戚研 痕呪 醗遂 煽舌 板 窒径
	width = 3;
	height = 4;
	double area = (width*height)/2;
	printf("購痕: %d\n株戚: %d\n格搾: %.1lf\n", width, height, area);
}
void ex3() {
	//庚切伸 array
	char s[7] = "杷朝鋳"; //"そびせたずば" 0~7 蟹掻殖 max string length 旭精杏稽 走舛馬檎 畷拝牛
	printf("%s\n", s);
	//String 聖 送羨 識情拝 呪 蒸革 巷繕闇 character 庚切伸 亜醤敗	
}
void main() {
	//ex1();
	//ex2();
	ex3();
}