//progrmam to demonstrate encapsulation
#include<iostream>
#include<conio.h>
    using namespace std;

    class rectangle
    {
    private: int l,b;
      
    public:
       void setLength(int len){  //taking parameters for code reduction
        l=len;
       }
        void setBreadth(int brth){
            b=brth;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getArea(){
            return l*b;
        }

    };
    
   int main(){
    rectangle obj;
    obj.setLength(8);
    obj.setBreadth(16);
    cout<<"\n length = "<<obj.getLength();
    cout<<"\n Breadth = "<<obj.getBreadth();
    cout<<"\n Area = "<<obj.getArea();
   }