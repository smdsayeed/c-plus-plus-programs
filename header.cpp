
//There are two types of header files
//system header file: It comes with compiler
#include <iostream>
//user-defined header file : It is written by the programmer 
// #include"this.h"
// if the this.h file exists the same directory it wont show any error
int c = 45;


using namespace std;
int main() {
  cout << "Hello World!"<<endl;
  int a = 4, b = 4;
  
   //dont forget to put brackets or else it will get confuse between operators
  cout << "The value of a==b is "<<(a==b)<<endl;
  
  
  //'::' scope resolution operator used to access global variable here
  cout << "The value of c is "<<::c<<endl; 

//   In c++ by default the decimal value is double data type we have declare the float number explicitly as follow ex 34.5f 
// 'l' is used as preceding the number which to be referred as the long double ex 34.4l

//*****************float ,long and double literals************
 float d = 34.4F;
 long double e = 34.4L;

 //sizeof is a keyword in c++
 cout<<" The size of 34.4 is,by default which is double "<<sizeof(34.4)<<endl;
 cout<<" The size of 34.4F is "<<sizeof(34.4F)<<endl;
 cout<<" The size of 34.4f is "<<sizeof(34.4f)<<endl;
 cout<<" The size of 34.4l , which is long double is "<<sizeof(34.4l)<<endl;
 cout<<" The size of 34.4L is "<<sizeof(34.4L)<<endl;

 //*****************Reference Variables***************
//  ex: rohan also called as rohu, and ro names may be different by the person is same
//similarly the variable names may be different but the value can be same;
float x = 455;
float & y = x;
cout<<y<<endl;
cout<<x<<endl;


//********************Type Casting************
// changing of one variable data type to the oth
float s = 44.4f;
cout<<(int)s<<endl;
cout<<int(s)<<endl;//another way
  return 0;
  
}