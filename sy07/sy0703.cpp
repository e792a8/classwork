/*********************************
文件名：sy0703.cpp
题目：3.	给出一个百分制的成绩，要求计算成绩对应的绩点。绩点=（科目成绩-50）/10，根据绩点给出最后的成绩。程序中至少包含一个自定义函数。
姓名：周璨
学号：200512134
时间：2020.11.08
修改履历：
*********************************/

#include <iostream>
using namespace std;

double r(double i)
{
	return i;
}

int main()
{
	double n, jd;
	cin >> n;
	jd = (r(n)-r(50))/r(10);
	cout << jd << '\t'
		<< "ABCDEE"[(int)(r(5)-r(jd))] << endl;
	return 0;
}
