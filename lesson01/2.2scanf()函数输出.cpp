/*
	Filename:2.2scanf()函数输出.c
	Author:fairlyy
	Time:2023/3/5
*/

#include<stdio.h>
int main(){
	int num1,num2;
	printf("请输入num1和num2的值:");
	scanf("%d%d",&num1,&num2);
	printf("num1 = %d,num2=%d",num1,num2);
	return 0; 
} 

//必须严格按照scanf()函数格式字符串进行输入 
