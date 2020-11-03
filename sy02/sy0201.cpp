/*********************************
文件名：sy0201.cpp
题目：编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1度为60分，1分为60秒，以常量的方式表示这两个值。对于每个输入值，分别使用独立的变量进行存储。
姓名：周璨
学号：200512134
时间：2020.11.03
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int d, m, s;
	cout << "输入一个纬度的度、分、秒。" <<endl
		<< "首先，输入度：";
	cin >> d;
	cout << "其次，输入分：";
	cin >> m;
	cout << "最后，输入秒：";
	cin >> s;
	cout << d << "度，"
		<<m << "分，"
		<< s << "秒="
		<< d + (double)m/60 + (double)s/3600
		<< "度" << endl;
	return 0;
}
