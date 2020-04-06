#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter values of a and b";
    cin>>a>>b;
    int x=(a-b);
    try
    {
        if(x!=0)
        {
            cout<<"result="<<a/(a-b);
        }
        else
        {
            throw x;
        }
    }
        catch(int i)
        {
            cout<<"divided by zero condition";
        }
    getch();
    return 0;

}
