#pragma once
#include "standard.h"

using namespace std;

class Book
{
public:
	Book(const char *name);
	Book(const Book &obj);
	~Book();
	void showName();

private:
	char *bookName;
};

