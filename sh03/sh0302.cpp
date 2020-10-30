/*********************************
文件名：sh0302.cpp
题目：设圆半径r=1. 5,圆柱高h=3,求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。用cin输人数据,输出计算结果，输出时要求有文字说明，取小数点后两位数字。请编程序。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;
#define PI 3.14159265359

int main()
{
	double r=1.5, h=3;
	cout
	<< "Circle perimeter: " << (r*2*PI) << endl
	<< "Circle area: " << (r*r*PI) << endl
	<< "Ball surface area: " << (4*PI*r*r) << endl
	<< "Ball volume: " << (r*r*r*PI*4/3) << endl
	<< "Cylinder volume: " << (r*r*PI*h) <<endl;
	return 0;
}
