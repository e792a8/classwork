/*********************************
文件名：sh0501.cpp
题目：用筛法求100之内的素数。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int i, j, f, c=0;
	for(i=2; i<=100; ++i)
	{
		f = 1;
		for(j=2; j<1+(int)sqrt(i); ++j)
		{
			if(i%j==0){
				f = 0;
				break;
			}
		}
		if(f)
		{
			cout << i << (++c%5?'\t':'\n');
		}
	}
	return 0;
}
