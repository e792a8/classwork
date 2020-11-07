import time
import os

tm = time.localtime()
md1 = '''/*********************************
文件名：'''
md2 = '''
题目：
姓名：周璨
学号：200512134
时间：'''
md3 = '''
修改履历：
*********************************/

/*********************************
非编程类作业在此处作答
*********************************/

/******程序类作业在下面作答******/
#include <iostream>
using namespace std;

int main()
{

}
'''

folder = input("Work name: ")
num = int(input("Number: "))
os.mkdir(folder)
os.chdir(folder)

for i in range(1,num+1):
	fname = folder+("00"+str(i))[-2:]+".cpp"
	f = open(fname,"a",encoding="utf-8")
	f.write(md1+fname+md2+str(tm.tm_year)+"."+("00"+str(tm.tm_mon))[-2:]+"."+("00"+str(tm.tm_mday))[-2:]+md3)
	f.close()