/*********************************
文件名：sy0401.cpp
题目：
输入两个整数，分别求它们的最大公约数和最小公倍数。
输入：两个整数，由空格分开。
输出：只有一行，先后输出最大公约数和最小公倍数，以一个空格分隔。
样例输入：25 75
样例输出：25 75
姓名：周璨
学号：200512134
时间：2020.11.07
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
	cout << b << ' ' << n*m/b << endl;
	return 0;
}
