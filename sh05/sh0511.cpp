/*********************************
文件名：sh0511.cpp
题目：打印以下图案
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	char s[] = "* * * * * *\n";
	int i, j;
	for(i=0; i<5; ++i)
	{
		for(j=0; j<i; ++j)
		{
			cout << "  ";
		}
		cout << s;
	}
}
