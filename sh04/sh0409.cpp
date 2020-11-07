/*********************************
文件名：sh0409.cpp
题目：Hanoi(汉诺)塔问题。编程序打印出移动的步骤。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

long long calc(int n, int s, int d)
{
	if(n==1)
	{
		cout 
		<< "Move a disk from pin "
		<< s << " to pin "<< d
		<< "." << endl;
		return 1;
	}
	int m[4][4] =
	{
		{0,0,0,0},
		{0,0,3,2},
		{0,3,0,1},
		{0,2,1,0}
	};
	return calc(n-1,s,m[s][d])
		+ calc(1,s,d)
		+ calc(n-1,m[s][d],d);
}

int main()
{
	int k;
	cout << "How many disks do you have? ";
	cin >> k;
	if(k<=0)
	{
		cout << "Not good." << endl;
		return -1;
	}
	cout << calc(k,1,3)
		<< " steps in total."
		<< endl;
	return 0;
}
