#include "A.h"


A::A(int &rn) :rNum(rn)			//ʹ�ó�ʼ�����ʽ��const�����ݳ�Ա���г�ʼ
{
}

A::~A()
{
}

void A::showNum()
{
	cout << "A�ࣺnum = " << rNum << "\n" << endl;
}