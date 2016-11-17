#pragma once
#include "Point.h"
class Line
{
public:
	Line(int, int, int, int);
	~Line();
	void printLine();
private:
	Point M;
	Point N;
};

