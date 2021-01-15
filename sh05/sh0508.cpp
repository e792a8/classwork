/*********************************
文件名：sh0508.cpp
题目：有15个数按由大到小顺序存放在一个数组中,输人一个数，要求用折半查找法找出该数是数组中第几个元素的值。如果该数不在数组中，则打印出“无此数”。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int a[15], i, j, n;
	cout << "B2L sorted 15 numbers below:" << endl;
	for(i=0; i<15; ++i)
	{
		cin >> a[i];
	}
	cout << "Number to search for: ";
	cin >> n;
	for(i=0,j=14; a[i]!=n&&i!=j;)
	{
		if(a[(i+j)/2]>n) i = (i+j)/2;
		else j = (i+j)/2;
	}
	if(a[i]==n) cout << i;
	else cout << "No.";
	cout << endl;
	return 0;
}
