/*9. Rewrite student class (from assignment 5) using comparison overloaded operators < & */

#include<iostream>
#include<iomanip>
using namespace std;
class student
{
 string name;
 int rollno;
 float marks[6],per,total;

 public:
student()
{
 name="";
 rollno=0;
 per = 0;
 total = 0;
 marks[6] = 0;
}
void getdata()
{
 cout<<endl<<"Enter the student name : ";
 cin.ignore();
 getline(cin,name);
 cout<<"Enter the Roll No. : ";
 cin>>rollno;
 cout<<"Enter the marks for the six subjects : "<<endl;
 for(int i = 0; i < 6; i++)
 {
 cout<<"Subject "<<i+1<<" : ";
 cin>>marks[i];
 total=total+marks[i];
 }
}
void displaydata()
{
 per=total/6;
 cout<<setw(20)<<name<<setw(20)<<rollno<<setw(20)<<per<<setw(20)<<grade()<<endl;
}
char grade()
{
    if(per >= 80)
    cout<<"Distinction";
    else if(per >= 60)
    cout<<"First Class";
    else if(per >= 40 )
    cout<<"Second Class";
    else
    cout<<"Failed";
    return 0;
}
void operator >(student a)
{if(per>a.per)
cout<<endl<<"First Student have scored more than second .";
}
void operator <(student a)
{if(per<a.per)
cout<<endl<<"second Student have scored more than second. ";
}
~student()
{
 name="";
 rollno=0;
 per = 0;
 total = 0;
 marks[6] = 0;
}
};
int main()
{
 student s1,s2;
 cout<<"Enter data of Student 1 : "<<endl;
 s1.getdata();
 cout<<"Enter data of Student 2 : "<<endl;
 s2.getdata();
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 cout<<setw(20)<<"NAME OF STUDENT"<<setw(20)<<"ROLL.NO."<<setw(20)<<"PERCENTADE"<<setw(20)<<"GRADE"<<endl;
 s1.displaydata();
 s2.displaydata();
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 s1<s2;
 s1>s2;
 return 0;
 
}