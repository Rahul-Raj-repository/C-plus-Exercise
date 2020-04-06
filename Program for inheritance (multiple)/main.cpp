#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
protected:
    int x,y;
public:
    void set(int a, int b)
    {
        x=a;
        y=b;
        cout<<"a="<<a<<"  b="<<b;
    }
};
class coutput
{
public:
    void display(int i)
    {
        cout<<i<<endl;
    }
};
class product: public operation,public coutput
{
 public:
     int fn()
     {
         return(x*y);
     }
};
int main()
{
    product obj;
    obj.display(8);
    obj.set(8,3);
    getch();
}
