#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="My name is Rahul"
    char* ch= strchr(str, 'a');
    cout<< ch - str + 1;
    return 0;
}
