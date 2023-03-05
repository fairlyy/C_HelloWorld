/*
	Filename:2.3实型数据.c
	Author:fairlyy
	Time:2023/3/5
*/
#include<stdio.h>
int main(){
//	float pi = 3.1415926,epsilon = 0.000001;
//	printf("pi = %f,eplison = %f\n",pi,epsilon);
//	printf("pi = %e,eplison = %e\n",pi,epsilon);
//	printf("pi = %g,eplison = %g\n",pi,epsilon);
//	
	
	//浮点型数据的输入
	float delta;
	double epsilon;
	scanf("%f%lf",&delta,&epsilon);
	printf("delta = %.8f,epsilon = %.8f",delta,epsilon);
	//3.14159265359 3.14159265359
//delta = 3.14159274,epsilon = 3.14159265
//从输出结果看，由于float类型数据的精度要比double类型低，因此当小数点后保留8位时，double类型的数据
//能够正常输出，而float类型的数据则会有一定的误差 
	
	return 0;
} 

