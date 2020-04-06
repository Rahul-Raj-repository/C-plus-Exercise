#include<iostream>
#include<conio.h>
using namespace std;
class book
{private:
    int id;
    char title[20];
    float price;
public:
    void display()
    {
        cout<<"\n"<<id<<"\t"<<title<<"\t"<<price;
    }
    void input()
    {
        cout<<"Enter the book id"<<endl;
        cin>>id;
        cout<<"Enter the title of the book"<<endl;
        cin.ignore();
        cin.getline(title,19);
        cout<<"Enter the book price"<<endl;
        cin>>price;
    }
};
int main()
{
    book obj;
    obj.input();
    obj.display();
    getch();
}
