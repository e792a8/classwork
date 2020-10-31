/*********************************
文件名：sh0312.cpp
题目：给一个不多于5位的正整数，要求:①求出它是几位数:②分别打印出每-位数字;③按逆序打印出各位数字,例如原数为321 ,应输出123。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[6];
	cin >> str;
	cout << strlen(str) << endl;
	for(int i=0; i<strlen(str); ++i){
		cout << str[i] << ' ';
	}
	cout << endl;
	for(int i=strlen(str)-1; i>=0; --i){
		cout << str[i] << ' ';
	}
	cout << endl;
	return 0;
}
