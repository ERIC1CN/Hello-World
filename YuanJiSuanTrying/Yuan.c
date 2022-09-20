#include<stdio.h>
int main()
{
	double PI = 3.14159265;
	printf("请分别输入圆的半径和圆柱的高:");
	double r = 0, h = 0, circle_length = 0, circle_areal = 0, sphere_areal = 0, cylinder_volume = 0;

	scanf_s("%lf %lf", &r, &h);
	circle_length = 2 * PI * r;
	circle_areal = PI * r * r;
	sphere_areal = 4 * PI * r * r;
	cylinder_volume = h * PI * r * r;
	printf("圆的周长是%f\n", circle_length);
	printf("圆的面积是%f\n", circle_areal);
	printf("圆球的表面积是%f\n", sphere_areal);
	printf("圆柱的体积是%f\n", cylinder_volume);

	return 0;
}

//Q1:  为什么直接这样写会报错:
//        "//,圆的面积是%f,圆球的表面积是%f,圆柱的体积是%f)(circle_areal)(sphere_areal)(cylinder_volume)"
//Q2:  为什么在.cpp格式下不能运行，要添加什么声明吗？
//Q3:  printf与cout 的区别是什么？
//Q4:  那个"_CRT_SEURE_NO_WARNINGS"怎么加？为什么用#define不行？
//Q5:  "printf("圆的周长是%f,圆的面积是%f,圆球的表面积是%f,圆柱的体积是%f", (circle_length)(circle_areal)(sphere_areal)(cylinder_volume) );"
//         为什么不能这么写？
//Q6:  #include<iostream>这有啥用？为什么C用的stdio.h而C++用的这个iostream?
//Q7:  能不能这么定义常量？"const double PI = 3.14159265;"?