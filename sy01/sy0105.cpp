/*********************************
文件名：sy0105.cpp
题目：编写一个程序，按下述格式要求用户输入摄氏温度值，显示华氏温度值。
姓名：周璨
学号：200512134
时间：2020.10.29
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	double a;
	cout << "Enter a degree in centigrade: ";
	cin >> a;
	cout << a << " degree centigrade is "
	<< 1.8*a+32 << " degree fahrenheit." << endl;
	return 0;
}
