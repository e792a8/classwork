/*********************************
文件名：sh0406.cpp
题目：用牛顿迭代法求根。方程为ax3+bx2+cx+d=0。系数a,b,c,d的值依次为1,2,3,4,由主函数输人。求x在1附近的一个实根。求出根后由主函数输出。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

double solve(double a, double b, double c, double d)
{
	double x0;
	double x1 = 1;
	do
	{
		x0 = x1;
		x1 = x0
		- (x0 * (x0 * (a * x0 + b) + c) + d)
		/ (x0 * (3*a*x0 + 2 * b) + c);
	}
	while(abs(x1-x0) > 1e-6);
	return x1;
}

int main()
{
	int a=1, b=2, c=3, d=4;
	cout << solve(a,b,c,d) << endl;
	return 0;
}
