#include<iostream>
using namespace std;
int main(){
    int number[5];
    number[0]=1;
    number[1]=3;
    number[4]=6;
    cout<<" The number are: ";
    for(int i=0;i<5;i++){
    cout<< number[i]<<" " ;
    }
    return 0;
}