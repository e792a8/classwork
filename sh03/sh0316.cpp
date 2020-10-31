/*********************************
文件名：sh0316.cpp
题目：输人一行字符,分别统计出其中英文字母、空格、数字和其他字符的个数。
姓名：周璨
学号：200512134
时间：2020.10.30
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	char str[1024];
	int c, s, d, o, i;
	c=s=d=o=i=0;
	cin.getline(str,1023);
	for(;str[i];++i){
		if(isdigit(str[i])) ++d;
		else if(isalpha(str[i])) ++c;
		else if(str[i]==' ') ++s;
		else ++o;
	}
	cout << "Alphas: " << c << endl
	<< "Spaces: " << s << endl
	<< "Digits: " << d << endl
	<< "Others: " << o << endl;
	return 0;
}
