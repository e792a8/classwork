/*********************************
文件名：sh0303.cpp
题目：输人一个华氏温度，要求输出摄氏温度。公式为c=0(F -32) ,输出要有文字说明,取两位小数。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double a;
	cout << "Enter a degree in fahrenheit: ";
	cin >> a;
	printf("%.2lf degree fahrenheit is %.2lf degree centigrade.\n",a,(a-32)*5/9);
	return 0;
}
