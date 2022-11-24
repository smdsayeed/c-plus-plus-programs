#include<iostream>
using namespace std;

int main()
{
    int a,b,sum, *p1,*p2;
    cout<<"\n Enter A value";
    cin>>a;
    cout<<"\n Enter B value";
    cin>>b;
    p1=&a;
    p2=&b;
    sum = *p1 + *p2;
    cout<<"\n sum of A nd B is :"<<sum<<endl;
    return 0;
}