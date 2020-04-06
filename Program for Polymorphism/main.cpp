#include<iostream>
#include<conio.h>
using namespace std;
float area(int);
int area(int,int);
int main()
{
int r;
cout<<"Enter radius of a circle";
cin>>r;
cout<<"Area of the circle is : "<<area(r)<<endl;
getch();
int l,b;
cout<<"Enter the Length and breadth of the rectangle";
cin>>l>>b;
cout<< "Area of the rectangle is : "<<area(l,b);
}
float area(int R)
{
    return(3.14*R*R);
}
int area(int L,int B)
{
    return(L*B);
}
