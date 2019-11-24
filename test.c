#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//计算最大公约数
//利用两数相除求得第一余数，判断余数是否 = 0（两数相等），为0则除数为最大公约数），
//若第一余数！= 0，再用除数除以第一余数求得第二余数
//最终会变为较小的数除以余数，直到倒数第一和倒数第二次余数。
//最大公约数为余数为0时的除数，即上一次余数。
int main(){

	int a = 1;
	int	b = 1;

	scanf("%d%d", &a, &b);

	int c = a % b;
	printf("%d\n", c);
	while (0){
		a = b;
		b = c;//将第一余数赋值给除数
		c = a % b;//计算第二余数，
	}
	printf("%d\n",c);
	printf("%d\n", b);
	system("pause");
	return 0;
}
int two(){
	int a = 1; 
	int b = 1;
	int max = 1;

	scanf("%d%d", &a, &b);
	int smaller = a < b ? a : b;//取较小数

	int i = 2;
	for (i = 2; i <= smaller; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	//输出max，即最大公约数
	printf("%d\n", max);
	//输出最小公倍数
	printf("%d\n", (a / max) * (b / max) * max);
	system("pause");
	return 0;
}