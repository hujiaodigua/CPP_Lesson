/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 30 Jun 2020 08:59:02 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

// base class
class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

// derived class -- class Rectangle derived by class Shape
class Rectangle: public Shape
{
    public:
    int getArea()
    {
        return (width * height);
    }
};

int main(void)
{
    Rectangle Rect;    // derived class defined a object
    Rect.setWidth(5);
    Rect.setHeight(7);
    
    // output the object's Rectangle
    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}
