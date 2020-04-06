// operator as a friend function//

#include<iostream>
#include<conio.h>
using namespace std;
class  mydata
{
private:
int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
         cout<<"\na="<<a<<" b="<<b;
    }
    friend mydata operator +(mydata,mydata);
    friend mydata operator -(mydata);
};
mydata operator +(mydata x,mydata y)
{
    mydata temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return(temp);
}
mydata operator -(mydata x)
{
    mydata temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return(temp);

}
int main()
{
    mydata c1,c2,c3,c4;
    c1.setdata(2,5);
    c2.setdata(7,1);
    c3=c1+c2;          //operator overloading
    c3.showdata();
    c4=-c1;            //operator overloading
    c4.showdata();
    getch();
}
