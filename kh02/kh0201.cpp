/*********************************
文件名：kh0201.cpp
题目：求长方形面积
姓名：周璨
学号：200512134
时间：2020.10.12
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "Calculating the area of a rectangle." <<endl
		<< "Enter the length of two edges, separated by a space: " << endl;
	cin >> a >> b;
	cout << "The area of this rectangle is "
		<< (a*b) << "." << endl;
		return 0;
}