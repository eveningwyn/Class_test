#include "A.h"


A::A(int &rn) :rNum(rn)			//使用初始化表达式对const型数据成员进行初始
{
}

A::~A()
{
}

void A::showNum()
{
	cout << "A类：num = " << rNum << "\n" << endl;
}