/*
	Filename:2.3ʵ������.c
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
	
	//���������ݵ�����
	float delta;
	double epsilon;
	scanf("%f%lf",&delta,&epsilon);
	printf("delta = %.8f,epsilon = %.8f",delta,epsilon);
	//3.14159265359 3.14159265359
//delta = 3.14159274,epsilon = 3.14159265
//����������������float�������ݵľ���Ҫ��double���͵ͣ���˵�С�������8λʱ��double���͵�����
//�ܹ������������float���͵����������һ������� 
	
	return 0;
} 

