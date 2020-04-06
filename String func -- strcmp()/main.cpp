#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char string1[]="Jerry";
    char string2[]="Ferry";
    int i,j,k;
    i=strcmp(string1,"Jerry");
    j=strcmp(string1,string2);
    k=strcmp(string1,"Jerry Boy");
    cout << i<<"\t"<<j<<"\t"<<k << endl;
    return 0;
}
