#include "Point.h"
#include "standard.h"

using namespace std;

/*Point::Point(int x0 = 0, int y0 = 0)	//初始化函数成员
	{
		cout << "自定义的构造函数被调用...\n";
		xPos = x0;
		yPos = y0;
	}*/
Point::Point(int x, int y) :xPos(x), yPos(y)	//使用初始化表
	{
	}

void Point::printPoint()	//实现printPoint函数
	{
		cout << "Point类：(" << xPos << ", " << yPos << ")\n" << endl;
	}

		

	


