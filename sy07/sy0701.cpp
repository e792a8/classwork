/*********************************
文件名：sy0701.cpp
题目：大象喝水
描述:一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是实数)。问大象至少要喝多少桶水才会解渴。(设PAI=3.14159)
输入：输入有一行：分别表示小圆桶的深h，和底面半径r，单位都是厘米。
输出：输出也只有一行，大象至少要喝水的桶数。
样例输入: 23 11
样例输出: 3
姓名：周璨
学号：200512134
时间：2020.11.08
修改履历：
*********************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double h, r;
	cin >> h >> r;
	cout << ceil(20000.0/(h*r*r*3.14159)) << endl;
	return 0;
}