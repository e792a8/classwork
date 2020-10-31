/*********************************
文件名：sh0309.cpp
题目：有3个整数a,b,c,由键盘输人,输出其中最大的数。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	a<b?a=b:0;
	a<c?a=c:0;
	cout << a << endl;
	return 0;
}
