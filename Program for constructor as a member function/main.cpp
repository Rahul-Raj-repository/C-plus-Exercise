#include<iostream>
#include<conio.h>
using namespace std;
class put
{
    int a,b;
public:
    put()
    {
        a=0;
        b=0;
    }
    put(int x,int y)
    {
        a=x;
        b=y;
    }
    put(int x)
    {
        a=x;
        b=0;
    }
    void showdata()
    {
        cout<<"\na="<<a<<"  b="<<b;
    }
};
int main()
{
    put c1,c2(2,7),c3(5);
    put c4=c2; // copy constructor
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    getch();
}
