/*********************************
文件名：sh0509.cpp
题目：给出年、月、日,计算该日是该年的第几天。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main(){
	int y,m,d;
	int x[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
	cout << "Y M D below:" << endl;
	cin >> y >> m >> d;
	d+=x[m];
	if(((y%4==0&&y%100!=0)||y%400==0)&&m>2)++d;
	cout << d << endl;
	return 0;
}
