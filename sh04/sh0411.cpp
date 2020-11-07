/*********************************
文件名：sh0411.cpp
题目：用递归方法求平方和。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

int s(int x)
{
	if(x==1) return 1;
	return x*x + s(x-1);
}

int main()
{
	int x;
	cin >> x;
	cout << s(x) << endl;
	return 0;
}
