/*
	Filename:3.2������ͱ��ʽ.c
	Author:fairlyy
	Time:2023/3/6
*/
#include<stdio.h>
#include<math.h>

int main(){
	//����һ�������εı߳��������
	double a,b,c,area,s;
	
//	scanf("�����������ε������߱߳���%lf %lf %lf",&a,&b,&c);
	a=3,67;
	b=5.43;
	c=6.21; 
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε����Ϊ��%.2f\n",area);
	
	return 0;
	
//	 3.67 5.43 6.21
} 
