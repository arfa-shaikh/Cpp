// wap to print fibonacci series of the first ten natural numbers
#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int c;
    int i;

    cout<<a<<endl;
    cout<<b<<endl;
    for(i=3;i<=10;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}