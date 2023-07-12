#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r,b,c,d,tot,avg;
    cout<<"enter student roll no;"<<endl;
    cin>>r;
    cout<<"enter first name subject marks;"<<endl;
    cin>>b;
    cout<<"enter second name subject marks;"<<endl;
    cin>>c;
    cout<<"enter third name subject marks;"<<endl;
    cin>>d;
    tot=b+c+d;
    avg=tot/3;
    cout<<"\n\n\t\t Lovely professional university\n\n";
    cout<<"\t student roll no:"<<r<<endl;
    cout<<"\t first subject marks:"<<b<<endl;
    cout<<"\t second subject marks:"<<c<<endl;
    cout<<"\t third subject marks:"<<d<<endl;
    cout<<"\t average marks:"<<avg<<endl;
    
    
    
    return 0;
}