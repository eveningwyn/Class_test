#include "Book.h"

Book::Book(const char *name)	//构造函数
	{
		bookName = new char[strlen(name) + 1];
		strcpy_s(bookName, (strlen(name) + 1), name);
	}

Book::Book(const Book &obj)     //显式定义复制构造函数
    {
		bookName = new char[strlen(obj.bookName) + 1];       //调用复制构造函数时再次申请一处新的空间
		strcpy_s(bookName, (strlen(obj.bookName) + 1), obj.bookName);
	}

Book::~Book()	//析构函数
	{
		cout << "析构函数被调用...\n" << endl;
		delete[]bookName;	//释放通过new申请的空间
	}

void Book::showName()
{
	cout << "Bookl类：Book name: " << bookName << "\n" << endl;
}