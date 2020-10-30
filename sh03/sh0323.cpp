/*********************************
文件名：sh0323.cpp
题目：迭代法求x=sqrt(a)。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	double a, x, y;
	int i;
	cin >> a;
	x = a;
	y = (x+a/x)/2;
	for(i=0; x-y>1e-5 || y-x>1e-5; ++i)
	{
		x = y;
		y = (x+a/x)/2;
	}
	cout << y;
	return 0;
}
