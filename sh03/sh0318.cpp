/*********************************
文件名：sh0318.cpp
题目：求En! (即求1!+2! +3!+4!+.. +20!)。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int m[21] = {0};

int fact(int x)
{
	if(x==1) return 1;
	if(m[x]) return m[x];
	m[x] = x*fact(x-1);
	return m[x];
}

int main()
{
	int s = 0;
	for(int i=1; i<=20; ++i) s += fact(i);
	cout << s << endl;
	return 0;
}
