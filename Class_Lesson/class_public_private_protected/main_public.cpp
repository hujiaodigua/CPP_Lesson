/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 09 Jun 2020 10:02:13 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Line
{
    public:
        double length;
        void setLength(double len);
        double getLength(void);
};

double Line::getLength(void)
{
    return length;
}

void Line::setLength(double len)
{
    length = len;
}

int main()
{
    Line line;
    
    line.setLength(6.0);
    cout << "Length of line: " << line.getLength() << endl;

    line.length = 10.0;
    cout << "Length of line: " << line.length << endl;
    return 0;
}
