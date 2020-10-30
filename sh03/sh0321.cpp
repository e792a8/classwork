/*********************************
文件名：sh0321.cpp
题目：求出这个数列的前20项之和。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	double s=0;
	int a=1, b=2, i;
	for(i=0; i<20; ++i)
	{
		s += (double)b/a;
		b += b;
		a = b-a;
	}
	cout << s;
	return 0;
}
