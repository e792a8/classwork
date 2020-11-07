/*********************************
文件名：sh0401.cpp
题目：写两个函数,分别求两个整数的最大公约数和最小公倍数，用主函数调用两个函数,并输出结果,两个整数由键盘输人。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

int zuidagongyueshu(int a, int b)
{
	int c;
	c = a%b;
	while(c){
		a = b;
		b = c;
		c = a%b;
	}
	return b;
}

int zuixiaogongbeishu(int a, int b)
{
	return a*b/zuidagongyueshu(a,b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << zuidagongyueshu(a,b) << ' '
		<< zuixiaogongbeishu(a,b) << endl;
	return 0;
}
