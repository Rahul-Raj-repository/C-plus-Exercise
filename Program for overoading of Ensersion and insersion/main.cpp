#include<iostream>
#include<conio.h>
using namespace std;
class mydata
{
 private:
     int a,b;
 public:
    friend ostream& operator <<(ostream&,mydata);
    friend istream& operator >>(istream&,mydata&);
};
istream& operator >>(istream& din,mydata & x)
{
    din>>x.a>>x.b;
}
ostream& operator <<(ostream& dout,mydata x)
{
    cout<<"a="<<x.a<<" b="<<x.b;
    return(dout);
}
int main()
{
    mydata d1;
    cout<<"Enter the values";
    cin>>d1;
    cout<<d1;
    getch();
}
