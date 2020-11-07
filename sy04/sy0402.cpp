/*********************************
文件名：sy0402.cpp
题目：求sinh(x)的值。
输入：一个实数x。
输出：一个实数，只占一行，为sinh(x)的值。
姓名：周璨
学号：200512134
时间：2020.11.07
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
