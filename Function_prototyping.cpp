#include<iostream>
using namespace std;

int sum(int a, int b ){ //Formal parameters which takes values from the Actual parameters
  int c= a+b;
  return c;
  }


    

//************Fucntion prototype*****
  //sytax: type function_name (arguments);
  // int sum(int , int); --->Acceptable
  // int sum (int a, b); ---->Not Acceptable;
  
int main() {
  int a,b; //Actual parameters
  cout << "Enter two number for summation\n";
  cin>>a>>b;
  cout<<"The sum is :"<<sum(a,b);
    return 0;
}
