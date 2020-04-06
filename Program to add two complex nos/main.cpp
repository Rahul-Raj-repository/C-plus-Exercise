#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<"+"<<b<<"i";
    }
    complex add(complex x)
    {
        complex temp;
        temp.a=a+x.a;
        temp.b=b+x.b;
        return(temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1.add(c2);
    c3.showdata();
    getch();
}
