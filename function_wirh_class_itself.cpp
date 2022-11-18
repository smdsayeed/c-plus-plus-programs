// defining the functio within a class itself
#include<iostream>
#include<conio.h>
using namespace std;
    class room
    {
    public:    int l,b,h;  //if declared with private it will show error that
    //the declared variable are not accessible
    public:
        int area()
        {
            return l*b;
        }
        int volume()
        {
            return l*b*h;
        }
    };
    int main(){
        room r;
        r.l=42;
        r.b=30;
        r.h=19;
        cout<<"\n Area of room = "<<r.area()<<endl;
        //endl is the keyword used for the end of the line
        cout<<"\n vloume of room = "<<r.volume()<<endl;
    }
 