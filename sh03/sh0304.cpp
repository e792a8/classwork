/*********************************
文件名：sh0304.cpp
题目：编程序,用getchar函数读人两个字符给cl ,c2，然后分别用putchar函数和cout语句输出这两个字符。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	cout << c2 << endl;
	cout << (int)c1 << ' ' << (int)c2 << endl;
	return 0;
}
