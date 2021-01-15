/*********************************
文件名：sh0504.cpp
题目：有一个已排好序的数组，今输入一个数，要求按原来排序的规律将它插人数组中。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int a[205], k[205] = {0}, n, i, t;
	cout << "How many (100 at most) sorted numbers do you have? ";
	cin >> n;
	cout << "Now enter those numbers below."
		<< endl;
	for(i=0; i<n*2; i+=2){
		cin >> a[i];
		k[i] = 1;
	}
	cout << "Enter another number here: ";
	cin >> t;
	for(i=0; i<n*2; i+=2)
	{
		if(t<a[i]){
			a[i-1] = t;
			k[i-1] = 1;
			break;
		}
	}
	if(i>=n*2)
	{
		a[i-1] = t;
		k[i-1] = 1;
	}
	cout << "Everything is done! "
		"Let's see our result below." << endl;
	t = 0;
	for(i=0; i<=n*2+2; ++i)
	{
		if(k[i]) cout << a[i]
			<< (++t%10?'\t':'\n');
	}
	return 0;
}
