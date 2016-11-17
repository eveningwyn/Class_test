#include "Line.h"


Line::Line(int x1, int y1, int x2, int y2) :M(x1, y1), N(x2, y2)
{
}

void Line::printLine()
{
	M.printPoint();
	N.printPoint();
}

Line::~Line()
{
}
