#include<stdio.h>
/*
	Filename:2.4浮点型数据输入输出.c
	Author:fairlyy
	Time:2023/3/6
*/
int main(){
	float delta;
	double epsilon;
	scanf("%f%lf",&delta,&epsilon);//double 需要在格式转换符前面加l，如%lf    ;       longlong类型需要加L，如Lf% 
	printf("delta = %.8f,epsilon = %.8f\n",delta,epsilon);
	return 0;
/*   3.14159265359 3.14159265359
delta = 3.14159274,epsilon = 3.14159265*/ 
 
	
} 
