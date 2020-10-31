/*********************************
文件名：sh0315.cpp
题目：输人两个正整数m和n,求其最大公约数和最小公倍数。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int m, n, a, b, c;
	cin >> m >> n;
	a = m; b = n;
	c = a%b;
	while(c){
		a = b;
		b = c;
		c = a%b;
	}
	cout << b << '\t' << n*m/b << endl;
	return 0;
}
