#include "standard.h"
#include "Point.h"
#include "Book.h"
#include "A.h"
#include "Line.h"

int main()
{	
	Point M(100,20);			//用定义好的类创建一个对象 点M
	M.printPoint();				//输出 M点 的信息
	Point N(200,0);
	N.printPoint();
	Point P(0,0);
	P.printPoint();

	Book CPP("C++ Primer");
	Book T(CPP);
	CPP.showName();
	T.showName();

	int x = 20, &rx = x;
	A a(rx);
	a.showNum();

	Line L(10, 6, 100, 200);
	L.printLine();

	system("pause");
	return 0;
}