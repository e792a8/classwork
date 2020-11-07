/*********************************
文件名：sh0404.cpp
题目：求a!+b!+c!的值,用一个函数fac(n)求n!。 a,b,c的值由主函数输人，最终得到的值在主函数中输出。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

#define CACHE_SIZE 100

int cache[CACHE_SIZE] = {0};

int fac(int x)
{
	if(x==1 || x==0) return 1;
	if(x < CACHE_SIZE)
	{
		if(cache[x]) return cache[x];
		cache[x] = x*fac(x-1);
		return cache[x];
	}
	else return x*fac(x-1);
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << fac(a) + fac(b) + fac(c) << endl;
	return 0;
}
