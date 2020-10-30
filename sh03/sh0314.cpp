/*********************************
文件名：sh0314.cpp
题目：
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;
double t, a, b, c, d;

int main()
{
    cin >> a >> b >> c >> d;
    (a < b ? 0 : (t = a, a = b, b = t));
    (a < c ? 0 : (t = a, a = c, c = t));
    (a < d ? 0 : (t = a, a = d, d = t));
    (b < c ? 0 : (t = b, b = c, c = t));
    (b < d ? 0 : (t = b, b = d, d = t));
    (c < d ? 0 : (t = c, c = d, d = t));
    cout << a << '\t' << b << '\t' << c << '\t' << d;
    return 0;
}
