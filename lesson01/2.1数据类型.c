/*
	Filename:2.1��������.c
	Author:fairlyy
	Time:2023/3/5
*/
#include<stdio.h>
int main(){
	int var = 10;
	int bigNumber = 6300000000;
	printf("val=%d",var);//printf(��ʽ�����ַ��������ֵ������)     ��ʽ�����ַ�����������ͨ��ֱ��������ַ�(�����ַ�ת������)����ʽת��˵�� 
	
	//��ͬ���������ʽ 
	printf("ʮ���ƣ�val=%d\n",var);
	printf("�˽��ƣ�val=%o\n",var); 
	printf("ʮ�����ƣ�val=%x\n",var);
	
	
	//printf()�����ṩ��һЩ��ʽ���η��������/���뷽ʽ/ǰ׺
	printf("The value of bigNumber as a integer is %d\n",bigNumber);
	printf("The value of bigNumber as a long long integer is %ld\n",bigNumber);//long long ������ 
	printf("Align var right with field width of 10:%10d\n",var);//��� 
	printf("Align var left with field width of 10:%-10d\n",var); 
	return 0;
	
	
} 

