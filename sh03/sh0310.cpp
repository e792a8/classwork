/*********************************
文件名：sh0310.cpp
题目：编写程序,输人x,输出y的值。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	cout << (
		x<1?x
		:x>=10?3*x-11
		:2*x-1
	) << endl;
	return 0;
}
