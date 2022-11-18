#include<iostream>
#include<conio.h>
using namespace std;
    class if_else
    {
    public:
        int i;
        int count;
    public:
       int accept(){
        cout<<"\n Enter a value :";
        cin>>count;
        for(i=0;i<count;i++){
            cout<<"\n vlaue is :"<<i<<endl;
        }
        return 0;
       }
 
    };

    int main(){
        if_else obj;
        obj.i;
        obj.count;
        obj.accept();
        
        return 0;
    }
    
   
    
   
    