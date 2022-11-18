// displaying students details using class 

#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    int rno;float fees;
    char name[25],course[25];
public:
    void accept();
    void display();
};
int main(){
    student obj;
    obj.accept();
    obj.display();
return 0;
}

void student::accept()
{
    cout<<"\n Enter Name:";
    cin>>name;
    cout<<"\n Enter roll number:";
    cin>>rno;
    cout<<"\nEnter the course name:";
    cin>>course;
    cout<<"\nEnter fees:"<<"\n";
    cin>>fees;
}

void student::display()
{
    cout<<"Name     :"<<name<<"\n";
    cout<<"Rollno   :"<<rno<<"\n";
    cout<<"Course   :"<<course<<"\n";
    cout<<"Fees     :"<<fees<<"\n";

}


