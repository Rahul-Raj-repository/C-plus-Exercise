#include <iostream>

using namespace std;
class A
{ public:
    int x;
    void set_x(int a)
    {
        x=a;
    }
    void showdata()
    {
      cout<<"Base x="<<x<<endl;
    }
};
    class B:public A
    { public:
        int y;
        void set_y(int b)
        {
          y=b;
        }
        void showdata()
        {
            cout<<"Derived y="<<y;
        }
    } ;
    int main()
    {
        A obj1;
        obj1.set_x(6);
        B obj2;
        obj2.set_y(9);
        obj1.showdata();
        obj2.showdata();
        return 0;
    }
