/*
	Filename:2.5��������.c
	Author:fairlyy
	Time:2023/3/6
*/

#include<stdio.h>
int main(){
	//�����к������泣���������Ǹ����泣���ڳ����жദ��ʹ��ʱ����������ೣ��������
	//����ʵ�֣�����뾶ֵr������뾶Ϊr��Բ���ܳ���������Լ��뾶Ϊr����������
	double r,c,s,v;
	float pi = 3.1415926;
	printf("������뾶��ֵ��");
	scanf("%lf",&r);
	c = 2 * pi * r ;
	s = pi * r *r ;
	v = pi * r * r* r;
	printf("�뾶Ϊr��Բ�ܳ�Ϊ%.2f,���Ϊ%.2f,������Ϊ%.2f\n",c,s,v);
	
	return 0;
	 
} 
