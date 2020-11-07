/*********************************
文件名：sh0407.cpp
题目：写一个函数验证哥德巴赫猜想
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

int prime(int n)
{
	for(int i=2; i<1+sqrt(n); ++i)
	{
		if(n%i == 0) return 0;
	}
	return 1;
}

void godtbahha(int n)
{
	int i;
	for(i=2; i<n/2+1; ++i)
	{
		if(prime(i) && prime(n-prime(i)))
		{
			cout << n << " = "
			<< i << " + "
			<< n-i << endl;
			break;
		}
	}
}

int main()
{
	int i, n;
	cin >> n;
	for(i=6; i<=n; i+=2)
	{
		godtbahha(i);
	}
	return 0;
}
