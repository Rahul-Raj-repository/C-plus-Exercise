#include <iostream>
#include<string.h>
using namespace std;

int main()
{
char source[]="Rahul";
char target[20];
strcpy(target,source);
cout<<"source string="<<source<<endl;
cout<<"target string="<<target;
return 0;
}
