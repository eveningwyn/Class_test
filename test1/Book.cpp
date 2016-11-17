#include "Book.h"

Book::Book(const char *name)	//���캯��
	{
		bookName = new char[strlen(name) + 1];
		strcpy_s(bookName, (strlen(name) + 1), name);
	}

Book::Book(const Book &obj)     //��ʽ���帴�ƹ��캯��
    {
		bookName = new char[strlen(obj.bookName) + 1];       //���ø��ƹ��캯��ʱ�ٴ�����һ���µĿռ�
		strcpy_s(bookName, (strlen(obj.bookName) + 1), obj.bookName);
	}

Book::~Book()	//��������
	{
		cout << "��������������...\n" << endl;
		delete[]bookName;	//�ͷ�ͨ��new����Ŀռ�
	}

void Book::showName()
{
	cout << "Bookl�ࣺBook name: " << bookName << "\n" << endl;
}