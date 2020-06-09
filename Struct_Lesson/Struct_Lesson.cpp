/*************************************************************************
	> File Name: Struct_Lesson.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 07 Jun 2020 06:07:56 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    Books Book1;
    Books Book2;

    // Book1 seeting
    strcpy(Book1.title, "C++ lesson");
    strcpy(Book1.author, "leeyee");
    strcpy(Book1.subject, "program");
    Book1.book_id = 12345;

    // Book2 seeting
    strcpy(Book2.title, "CSS lesson");
    strcpy(Book2.author, "leeyee");
    strcpy(Book2.subject, "web tec");
    Book2.book_id = 12346;

    // 输出 Book1 信息
    cout << "第一本书标题 : " << Book1.title <<endl;
    cout << "第一本书作者 : " << Book1.author <<endl;
    cout << "第一本书类目 : " << Book1.subject <<endl;
    cout << "第一本书 ID : " << Book1.book_id <<endl;
 
    // 输出 Book2 信息
    cout << "第二本书标题 : " << Book2.title <<endl;
    cout << "第二本书作者 : " << Book2.author <<endl;
    cout << "第二本书类目 : " << Book2.subject <<endl;
    cout << "第二本书 ID : " << Book2.book_id <<endl;

    return 0;
}
