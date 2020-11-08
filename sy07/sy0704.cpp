/*********************************
文件名：sy0704.cpp
题目：
姓名：周璨
学号：200512134
时间：2020.11.08
修改履历：
*********************************/

#define CACHE_SIZE 100000

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

#include <iostream>
using namespace std;

int main()
{
	double e = 1;
	for(double i=1; i<20; i+=1)
	{
		e += 1.0/fac(i);
	}
	cout << e << endl;
	return 0;
}
