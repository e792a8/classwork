/*********************************
文件名：sh0507.cpp
题目：找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小(也可能没有鞍点)。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	int m[100][100], w, h, i, j,
	max[100] = {0}, min[100] = {0};
	cout << "Width and height: ";
	cin >> w >> h;
	cout << "Data below:" << endl;
	for(i=0; i<h; ++i)
	{
		for(j=0; j<w; ++j)
		{
			cin >> m[i][j];
			if(m[i][j]>m[i][max[i]]) max[i] = j;
			if(m[i][j]<m[min[j]][j]) min[j] = i;
		}
	}
	j = 0;
	for(i=0; i<h; ++i)
	{
		if(min[max[i]]==i)
		{
			cout << 'L' << i+1 << 'C' << max[i]+1
				<< ',' << m[i][max[i]] << endl;
			++j;
		}
	}
	if(j==0) cout << "No." << endl;
	return 0;
}
