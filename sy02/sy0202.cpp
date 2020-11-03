/*********************************
文件名：sy0202.cpp
题目：给出一个百分制的成绩，要求输出成绩等级'A,B,C,D,"E"。90分以上为'A，80-89分为B,70 -79分为"C,60 -69分为D ,60分以下为E。
姓名：周璨
学号：200512134
时间：2020.11.03
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int t;
	cout << "Score: ";
	cin >> t;
	(t<0||t>100? cout << "Error."
	:cout << "EEEEEEDCBAA"[t/10]) 
	<< endl;
	return 0;
}
