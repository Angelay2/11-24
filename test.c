#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�������Լ��
//�������������õ�һ�������ж������Ƿ� = 0��������ȣ���Ϊ0�����Ϊ���Լ������
//����һ������= 0�����ó������Ե�һ������õڶ�����
//���ջ��Ϊ��С��������������ֱ��������һ�͵����ڶ���������
//���Լ��Ϊ����Ϊ0ʱ�ĳ���������һ��������
int main(){

	int a = 1;
	int	b = 1;

	scanf("%d%d", &a, &b);

	int c = a % b;
	printf("%d\n", c);
	while (0){
		a = b;
		b = c;//����һ������ֵ������
		c = a % b;//����ڶ�������
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
	int smaller = a < b ? a : b;//ȡ��С��

	int i = 2;
	for (i = 2; i <= smaller; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	//���max�������Լ��
	printf("%d\n", max);
	//�����С������
	printf("%d\n", (a / max) * (b / max) * max);
	system("pause");
	return 0;
}