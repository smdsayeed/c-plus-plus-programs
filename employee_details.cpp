//details of an employee
#include<iostream>
#include<conio.h>
using namespace std;
    class employee_details
    {
    public:
     int empid;
    float salary;
    char name[25],dept[25],desig[10];

    public:
            void accept(){
                cout<<"\n Enter Employee_id:"<<endl;
                cin>>empid;
                
                cout<<"\n Enter Name:"<<endl;
                cin>>name;
                
                cout<<"\n Enter Department:"<<endl;
                cin>>dept;
                
                cout<<"\n Enter Designation:"<<endl;
                cin>>desig;

                cout<<"\n Salary:"<<endl;
                cin>>salary;



            }
            void display(){
                cout<<"     Name        :"<<name;
                cout<<"\n   Department  :"<<dept;
                cout<<"\n   Designation :"<<desig;
                cout<<"\n   Employee_id :"<<empid;
                cout<<"\n   salary      :"<<salary;

            }
       
    };

    int main(){
        employee_details obj;
        obj.name;
        obj.dept;
        obj.empid;
        obj.salary;
        obj.desig;
        cout<<"\n",obj.accept();
        cout<<"\n",obj.display();
    }
    
 