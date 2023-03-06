/*
	Filename:2.5命名常量.c
	Author:fairlyy
	Time:2023/3/6
*/

#include<stdio.h>
int main(){
	//程序中含有字面常量，尤其是该字面常量在程序中多处被使用时，建议给这类常量命名。
	//编码实现：输入半径值r，输出半径为r的圆的周长和面积，以及半径为r的球的体积。
	double r,c,s,v;
	float pi = 3.1415926;
	printf("请输入半径的值：");
	scanf("%lf",&r);
	c = 2 * pi * r ;
	s = pi * r *r ;
	v = pi * r * r* r;
	printf("半径为r的圆周长为%.2f,面积为%.2f,球的体积为%.2f\n",c,s,v);
	
	return 0;
	 
} 
