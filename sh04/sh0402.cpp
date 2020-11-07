/*********************************
文件名：sh0402.cpp
题目：求方程 ax^2 + bx + c = 0 的根。
姓名：周璨
学号：200512134
时间：2020.11.04
修改履历：
*********************************/

#include <cstdio>
#include <cmath>
using namespace std;

void negative(double r, double t)
{
	printf(
		"x1=%.5lf%+.5lfi; "
		"x2=%.5lf%+.5lfi",
		r, t, r, -t
	);
}

void positive(double r, double t)
{
	printf(
		"x1=%.5lf; x2=%.5lf\n",
		r + t,
		r - t
	);
}

void zero(double r)
{
	printf("x1=x2=%.5lf",r);
}

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
		zero(r);
	}
	else if(d>0)
	{
		positive(r, t);
	}
	else
	{
		negative(r, t);
	}
	return 0;
}
