/*************************************************************************
	> File Name: main_private.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 09 Jun 2020 10:08:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Box
{
    public:
        double length;
        void setWidth(double wid);
        double getWidth(void);

    private:
        double width;
};

double Box::getWidth(void)
{
    return width;
}

double Box::setWidth(void)
{
    width = wid;
}

int main()
{
    Box box;

    box.length = 10.0;
    cout << "Length of box : " << box.length <<endl;

    // box.width = 10.0;    // error with is private
    box.setWidth(10.0);
    cout << "Width of box : " << box.getWidth() <<endl;

    return 0;
}
