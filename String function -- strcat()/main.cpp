#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char source[]="World!!";
    char target[20]="Hello";
    strcat(target,source);
    cout<<"source string="<<source<<endl;
    cout<<"target string="<<target;
    return 0;
}
