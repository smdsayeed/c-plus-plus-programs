#include<iostream>
using namespace std;

void swap(int x, int y){//this will not change
    int temp = x;
    x=y;
    y= temp;
}
//call by reference using pointers
void swapPoiner(int*a, int*b){
    int temp = *a;
    *a=*b;
    *b =temp;
}

/*call by reference using c++ reference variable,
in below code we are pointing towards the address of the actual parameters*/

void swapReferncevar(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
   
    int a = 4, b = 5;
    cout<<"The value of a before swap is : "<<a<<endl;
    cout<<"The value of b before swap is : "<<b<<endl;
    // swap(a,b); //This will not change the value because it send only a copy of the Actul parameters
    // //which doesn't impact the values of the actual parameters
    // cout<<"The value of a is : "<<a<<endl;
    // cout<<"The value of b is : "<<b<<endl;


    // swapPoiner(&a, &b);
    // cout<<"The value of a after swap is : "<<a<<endl;
    // cout<<"The value of b after swap is : "<<b<<endl;

    swapReferncevar(a,b);
    cout<<"The value of a after swap is : "<<a<<endl;
    cout<<"The value of b after swap is : "<<b<<endl;
    




    return 0;
 }
