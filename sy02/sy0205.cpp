/*********************************
文件名：sy0205.cpp
题目：利用循环打印华氏温度与摄氏温度对照表。
姓名：周璨
学号：200512134
时间：2020.11.03
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	double a;
	for(a=0; a<=300; a+=20){
		cout << a << '\t'
		<< int((a-32)/1.8) << endl;
	}
	return 0;
}
