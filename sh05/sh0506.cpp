/*********************************
文件名：sh0506.cpp
题目：打印出杨辉三角形(要求打印出10行)。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main(){
	int m[11][11] = {0};
	for(int i=1; i<=10; ++i){
		for(int j=1; j<=i; ++j){
			if(j==1 || j==i) m[i][j] = 1;
			else m[i][j] = m[i-1][j-1] + m[i-1][j];
			cout
				<< (j==1?"":"\t")
				<< m[i][j];
		}
		cout << endl;
	}
	return 0;
}
