/*************************************************************************
	> File Name: class_destructors.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 13 Jun 2020 08:04:44 PM CST

    类的析构函数是类的一种特殊的成员函数，它会在每次删除所创建的对象时执行。
析构函数的名称与类的名称是完全相同的，只是在前面加了个波浪号（~）作为前缀，它不会返回任何值，也不能带有任何参数。析构函数有助于在跳出程序（比如关闭文件、释放内存等）前释放资源。
 ************************************************************************/

#include<iostream>
using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line();    // this is constructor
        ~Line();   // this is destructor
    private:
        double length;
};

Line::Line(void)
{
    cout << "Object is being created" << endl;
}

Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line;

    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}
