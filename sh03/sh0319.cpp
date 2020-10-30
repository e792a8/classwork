/*********************************
文件名：sh0319.cpp
题目：输出所有的“水仙花数”。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int i, a, b, c, n=0;
	for(i=100; i<=999; ++i)
	{
		a = i%10;
		b = a/10%10;
		c = a/100;
		if(i==a*a*a+b*b*b+c*c*c)
		{
			cout << i << '\t';
			++n;
			if(i%5==4) cout << endl;
		}
	}
	return 0;
}
