#include<iostream>
#include<conio.h>
using namespace std;
class data
{
private:
    int a,b;
public:
    void setdata(int a,int b)
    {
        this->a=a;            // useful in name conflict issue
        this->b=b;
    }
    void showdata()
    {
        cout<<"\na="<<a<<" b="<<b;
    }
};
int main()
{
    data d1;
    d1.setdata(3,4);
    d1.showdata();
    getch();
}
