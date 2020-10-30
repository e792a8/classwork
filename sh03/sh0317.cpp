/*********************************
文件名：sh0317.cpp
题目：求Sn=a+aa +aa+... +a...a之值
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int a, n, s=0;
	cin >> a >> n;
	for(int i=0; i<n; ++i)
	{
		s += a;
		a = a*10+a%10;
	}
	cout << s;
	return 0;
}
