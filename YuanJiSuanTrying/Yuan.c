#include<stdio.h>
int main()
{
	double PI = 3.14159265;
	printf("��ֱ�����Բ�İ뾶��Բ���ĸ�:");
	double r = 0, h = 0, circle_length = 0, circle_areal = 0, sphere_areal = 0, cylinder_volume = 0;

	scanf_s("%lf %lf", &r, &h);
	circle_length = 2 * PI * r;
	circle_areal = PI * r * r;
	sphere_areal = 4 * PI * r * r;
	cylinder_volume = h * PI * r * r;
	printf("Բ���ܳ���%f\n", circle_length);
	printf("Բ�������%f\n", circle_areal);
	printf("Բ��ı������%f\n", sphere_areal);
	printf("Բ���������%f\n", cylinder_volume);

	return 0;
}

//Q1:  Ϊʲôֱ������д�ᱨ��:
//        "//,Բ�������%f,Բ��ı������%f,Բ���������%f)(circle_areal)(sphere_areal)(cylinder_volume)"
//Q2:  Ϊʲô��.cpp��ʽ�²������У�Ҫ���ʲô������
//Q3:  printf��cout ��������ʲô��
//Q4:  �Ǹ�"_CRT_SEURE_NO_WARNINGS"��ô�ӣ�Ϊʲô��#define���У�
//Q5:  "printf("Բ���ܳ���%f,Բ�������%f,Բ��ı������%f,Բ���������%f", (circle_length)(circle_areal)(sphere_areal)(cylinder_volume) );"
//         Ϊʲô������ôд��
//Q6:  #include<iostream>����ɶ�ã�ΪʲôC�õ�stdio.h��C++�õ����iostream?
//Q7:  �ܲ�����ô���峣����"const double PI = 3.14159265;"?