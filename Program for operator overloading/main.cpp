#include<iostream>
#include<conio.h>
using namespace std;
class put
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
        cout<<"\na="<<a<<"  b="<<b;
    }
    put operator +(put p) //operator overloading
    {
        put temp;
        temp.a=a+p.a;
        temp.b=b+p.b;
        return(temp);
    }
};
int main()
{
 put c1,c2,c3;
 c1.setdata(5,7);
 c2.setdata(9,1);
 c1.showdata();
 c2.showdata();
 c3=c1+c2;      //c3=c1.operator +(c2);
  c3.showdata();
 getch();
}
