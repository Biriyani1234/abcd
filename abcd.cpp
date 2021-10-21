#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter a: "; //enter a number
    cin>>a;
    cout<<"enter b: ";  //enter another number
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is"<<a<<endl; //a is greater
    cout<<"b is"<<b<<endl;
     
}
