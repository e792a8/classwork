/*********************************
文件名：sy0103.cpp
题目：编写程序，输出自我介绍的内容（输出5行）。
姓名：周璨
学号：200512134
时间：2020.10.29
修改履历：
*********************************/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t s = time(NULL);
	tm* now = localtime(&s);
	cout
	<< "Good " <<(now->tm_hour<12?"morning":now->tm_hour<20?"afternoon":"night") << " everyone!" <<endl
	<< "My name is Zhou Can." << endl
	<< "I am from Suzhou, Jiangsu province." << endl
	<< "This year I am " << now->tm_year-102 << " years old." << endl
	<< "Wish we get along and make friends here." << endl;
	return 0;
}
