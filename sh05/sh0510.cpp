/*********************************
文件名：sh0510.cpp
题目：有一篇文章,共有3行文字，每行有80个字符。要求分别统计出其中英文大写字母小写字母、数字、空格以及其他字符的个数。
姓名：周璨
学号：200512134
时间：2020.11.14
修改履历：
*********************************/

#include <iostream>
using namespace std;

int main()
{
	char str[100];
	int c, s, d, o, i, n=3;
	c=s=d=o=i=0;
	while(n--){
		cin.getline(str,99);
		for(;str[i];++i){
			if(isdigit(str[i])) ++d;
			else if(isalpha(str[i])) ++c;
			else if(str[i]==' ') ++s;
			else ++o;
		}
	}
	cout << "Alphas: " << c << endl
	<< "Spaces: " << s << endl
	<< "Digits: " << d << endl
	<< "Others: " << o << endl;
	return 0;
}
