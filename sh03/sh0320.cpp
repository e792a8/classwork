/*********************************
文件名：sh0320.cpp
题目：一个数如果恰好等于它的因子之和,这个数就称为“完数”。例如,6 的因子为1,2,3,而6=1 +2+3,因此6是“完数”。编程序找出1000之内的所有完数，并按下面格式输出其因子。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int i, j, s;
	for(i=2; i<=1000; ++i)
	{
		s = 0;
		for(j=1; j<i/2+1; ++j){
			if(i%j==0) s += j;
		}
		if(s==i)
		{
			cout << i << ", its factors are 1";
			for(j=2; j<i/2+1; ++j)
			{
				if(i%j==0) cout << ", " << j;
			}
			cout << endl;
		}
	}
}