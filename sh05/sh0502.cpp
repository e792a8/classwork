/*********************************
文件名：sh0502.cpp
题目：用选择法对10个整数排序。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int i, j, t, m;
	for(i=0; i<10; ++i)
	{
		cin >> a[i];
	}
	for(j=0; j<10; ++j)
	{
		m = j;
		for(i=j+1; i<10; ++i)
		{
			if(a[i]<a[m]) m = i;
		}
		t=a[m]; a[m]=a[j]; a[j]=t;
	}
	for(i=0; i<10; ++i)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}
