/*********************************
文件名：kh0201.cpp
题目：求三角形面积
姓名：周璨
学号：200512134
时间：2020.10.12
修改履历：
*********************************/

/*********************************
NOTE: This file is transcoded into UTF-8.
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, p, s;
	cout << "Calculating the area of a triangle." <<endl;
	cout << "Enter the length of three edges, separated by a space: " << endl;
	cin >> a >> b >> c;
	p = (a + b + c)/2;
	s = p*(p-a)*(p-b)*(p-c);
	if (s <= 0.0f) 
	{
		cout << "Bad data." <<endl;
		return -1;
	}
	s = sqrt(s);
	cout << "The area of this triangle is "
		<< s << "." << endl;
		return 0;
}