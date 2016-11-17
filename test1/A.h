#pragma once
#include "standard.h"

using namespace std;

class A
{
public:
	A(int &rn);
	~A();
	void showNum();
private:
	int &rNum;			//引用类型
};

