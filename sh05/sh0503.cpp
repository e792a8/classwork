/*********************************
文件名：sh0503.cpp
题目：求一个3x3矩阵对角线元素之和。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int t, s=0, i;
	for(i=0; i<9; ++i)
	{
		cin >> t;
		i%2 ? 0 : s += t;
	}
	cout << s << endl;
	return 0;
}
