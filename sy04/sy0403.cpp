/*********************************
文件名：sy0403.cpp
题目：用递归方法求n阶勒让德多项式的值
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

double p(int n, double x)
{
	if(n==0) return 1.0;
	if(n==1) return x;
	return (
		(2*n-1)*x
		-p(n-1,x)
		-(n-1)*p(n-2,x)
	) / n;
}

int main()
{
	int n;
	double x;
	cout << "Enter n and x: ";
	cin >> n >> x;
	cout << p(n,x) << endl;
	return 0;
}
