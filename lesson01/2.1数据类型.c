/*
	Filename:2.1数据类型.c
	Author:fairlyy
	Time:2023/3/5
*/
#include<stdio.h>
int main(){
	int var = 10;
	int bigNumber = 6300000000;
	printf("val=%d",var);//printf(格式控制字符串，输出值参数表)     格式控制字符串包括：普通可直接输出的字符(包括字符转义序列)；格式转换说明 
	
	//不同进制输出方式 
	printf("十进制：val=%d\n",var);
	printf("八进制：val=%o\n",var); 
	printf("十六进制：val=%x\n",var);
	
	
	//printf()函数提供的一些格式修饰符，如域宽/对齐方式/前缀
	printf("The value of bigNumber as a integer is %d\n",bigNumber);
	printf("The value of bigNumber as a long long integer is %ld\n",bigNumber);//long long 型数据 
	printf("Align var right with field width of 10:%10d\n",var);//域宽 
	printf("Align var left with field width of 10:%-10d\n",var); 
	return 0;
	
	
} 

