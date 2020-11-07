/*********************************
文件名：sh0405.cpp
题目：写一函数求sinh(x)的值
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

double sinh(double x)
{
	return (exp(x) - exp(-x)) / 2;
}

int main()
{
	double x;
	cin >> x;
	cout << sinh(x) << endl;
	return 0;
}
