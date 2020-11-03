/*********************************
文件名：sy0301.cpp
题目：如何使用C++来找出编码88表示的字符？指出至少两种方法。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	// I have at least 9 ways to find the character.

	// 1.
	int i = 88;
	cout << (char) i;

	// 2.
	char j = 88;
	cout << j;

	// 3.
	cout << (char)88;

	// 4.
	putchar(88);

	// 5.
	putchar(i);

	// 6.
	putchar(j);

	// 7.
	for(i=0; i!=88; ++i)
	{
		cout << (char)i;
	}

	// 8.
	int max = 100000;
	int min = 0;
	i = (max+min)/2;
	while(i!=88)
	{
		i>88?max=i:min=i;
		i = (max+min)/2;
	}
	cout << (char) i;

	// 9.
	// There is another perfect solution,
	// but the space is far less than enough.

	return 0;
}
