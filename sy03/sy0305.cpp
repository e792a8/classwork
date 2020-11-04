/*********************************
文件名：sy0305.cpp
题目：5.	求一元二次方程的根
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	double r, t, d,
		a, b, c;
	scanf("%lf%lf%lf",&a,&b,&c);
	d = b*b-4*a*c;
	t = sqrt(abs(d))/a/2;
	r = -b/a/2;
	if(abs(d)<1e-6)
	{
		printf("x1=x2=%.5lf",r);
	}
	else if(d>0)
	{
		printf(
			"x1=%.5lf; x2=%.5lf\n",
			r + t,
			r - t
		);
	}
	else
	{
		printf(
			"x1=%.5lf%+.5lfi; "
			"x2=%.5lf%+.5lfi",
			r, t, r, -t
		);
	}
	return 0;
}
