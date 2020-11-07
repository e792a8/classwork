/*********************************
文件名：sh0412.cpp
题目：
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

#define S(a,b,c) ((a + b + c)/2)
#define A(p,a,b,c) (p*(p-a)*(p-b)*(p-c))

int main()
{
	float a, b, c, p, s;
	cout << "Calculating the area of a triangle." <<endl;
	cout << "Enter the length of three edges, separated by a space: " << endl;
	cin >> a >> b >> c;
	p = S(a,b,c);
	s = A(p,a,b,c);
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
