
#include<iostream>
int main()
{
    int a=40;
    int b=20;
    int temp;
    cout<<"value of a(before swap):"<<a<<endl;
    cout<<"value of b(before swap):"<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a(after swap):"<<a<<endl;
    cout<<"value of b(after swap):"<<b<<endl;
    return 0;
}