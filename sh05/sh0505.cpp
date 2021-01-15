/*********************************
文件名：sh0505.cpp
题目：将一个数组中的值按逆序重新存放。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int a[100], n, i, t;
	cout << "How many numbers do you have? ";
	cin >> n;
	cout << "Enter those numbers below." << endl;
	for(i=n-1; i>=0; --i){
		cin >> a[i];
	}
	cout << "Those numbers in reversed order:" << endl;
	for(i=0; i<n; ++i){
		cout << a[i] << ((i+1)%10?'\t':'\n');
	}
	return 0;
}
