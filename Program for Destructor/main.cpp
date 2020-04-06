#include<iostream>
#include<conio.h>
using namespace std;
class put
{
private:
    int a,b;
public:
    ~put()
    {
        cout<<"Destructor called\n";
    }
};
void f1()
{
    put c1;
}
int main()
{
    f1();
    f1();
    getch();
}
