//program to calculate area and circumference of circle using class

#include<iostream>
#include<conio.h>
using namespace std;
    class circle
    {
    private:
        double r;
    public:
      void input();
      void area();
      void circum();
    };
    
int main(){
    circle obj;
    obj.input();
    obj.area();
    obj.circum();
    return 0;
}

  void circle::input()
    {
        cout<<"\n Enter a radius for a circle:";
        cin>>r;

    }
    
    void circle::area()
    {
        double ar=3.14*r*r;
        cout<<"\n Area = "<<ar;
    }
    void circle::circum(){
        double cir = 2*3.14*r;
        cout<<"\n circumference="<<cir;
    }
    