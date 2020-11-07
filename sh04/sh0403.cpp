/*********************************
文件名：sh0403.cpp
题目：写一个判别素数的函数
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n)
{
	for(int i=2; i<1+sqrt(n); ++i)
	{
		if(n%i == 0) return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	cout << t << " is "
	<< (isprime(t)?"":"not ")
	<< "a prime number." << endl;
	return 0;
}
