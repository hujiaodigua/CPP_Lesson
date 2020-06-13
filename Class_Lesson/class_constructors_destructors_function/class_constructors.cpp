/*************************************************************************
	> File Name: class_constructors.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 13 Jun 2020 05:32:53 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line();    // constructors function, same name with the class

    private:
        double length;
};

Line::Line(void)
{
    cout << "Object is being created" << endl;
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

    // set the length
    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    return 0;
}
