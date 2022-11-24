//program to display address of variables using pointers
#include<iostream>

using namespace std;
 
  int main(){
  int a =100, *p1;
    char b='a' , *p2;
    float c=2.25,*p3;
    p1 = &a;
    p2 = &b;
    p3= &c;
    //prints the values 
    cout<<"\n Address of a ="<<*p1<<endl;
    cout<<"\n Address of b ="<<*p2<<endl;
    cout<<"\n Address of c ="<<*p3<<endl;
   
   //prints the address
    cout<<"\n Address of a ="<<p1<<endl;
    cout<<"\n Address of b ="<<p2<<endl;
    cout<<"\n Address of c ="<<p3<<endl;
    return 0;
  }