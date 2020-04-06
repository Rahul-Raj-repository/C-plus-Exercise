#include<iostream>
#include<conio.h>
using namespace std;
class Dummy
{public:
    int x;           // instance member variable
    static int y;    // static member variable
};
int Dummy::y;
int main()
{
    Dummy d1,d2;
    d1.x=4;
    Dummy::y=5;
    cout<<"y="<<d2.y;
    getch();

}
