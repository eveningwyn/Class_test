#include "Point.h"
#include "standard.h"

using namespace std;

/*Point::Point(int x0 = 0, int y0 = 0)	//��ʼ��������Ա
	{
		cout << "�Զ���Ĺ��캯��������...\n";
		xPos = x0;
		yPos = y0;
	}*/
Point::Point(int x, int y) :xPos(x), yPos(y)	//ʹ�ó�ʼ����
	{
	}

void Point::printPoint()	//ʵ��printPoint����
	{
		cout << "Point�ࣺ(" << xPos << ", " << yPos << ")\n" << endl;
	}

		

	


