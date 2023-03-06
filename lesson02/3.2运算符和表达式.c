/*
	Filename:3.2运算符和表达式.c
	Author:fairlyy
	Time:2023/3/6
*/
#include<stdio.h>
#include<math.h>

int main(){
	//给出一个三角形的边长，求面积
	double a,b,c,area,s;
	
//	scanf("请输入三角形的三条边边长：%lf %lf %lf",&a,&b,&c);
	a=3,67;
	b=5.43;
	c=6.21; 
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积为：%.2f\n",area);
	
	return 0;
	
//	 3.67 5.43 6.21
} 
