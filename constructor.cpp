//program to display fibonacci series uisng constructor
#include<iostream>
#include<conio.h>
using namespace std;
    class fib
    {
    int a,b,c;
        
    public:
        fib();  //default constructor
        // constructor is a special memeber function with same name as 
        //it is automatically invoked whenever an object is created
        // of the class. it is used to initialize the objects of its class
        void change(){

        a=b;
        b=c;
        c=a+b;
        };
        void display(){

        cout<<a<<endl; 
        };
    };
    
    fib::fib()
    {
        a=0;
        b=1;
        c=a+b;

    }
    
    int main(){
        fib obj;
        int i,n;
        cout<<"\n Enter a limit to print the fibonacci series";
        cin>>n;
        for(i=1;i<n;i++){
            obj.display();
            obj.change();
        }
        return 0;
    }
    