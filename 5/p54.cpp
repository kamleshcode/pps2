/*4. Create a class student with the following data members.
Rollno, name, marks [6], per, class.
Use constructor and destructor properly and write member function for each of the 
following:
a) To get the data.
b) To display the data.
c) To calculate percentage.
d) To calculate class based on the percentage.
e) To sort the students percentagewise.*/

#include<iostream>
#include<iomanip>
using namespace std;
class student
{
 string name;
 int rollno;
 float marks[6],perc,total;

 public:
student()
{
 name="";
 rollno=0;
 perc = 0;
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
void display()
{
 perc=total/6;
 cout<<setw(20)<<name<<setw(20)<<rollno<<setw(20)<<perc<<setw(20)<<grade()<<endl;
}
char grade()
{
    if(perc >= 80)
    cout<<"Distinction";
    else if(perc >= 60)
    cout<<"First Class";
    else if(perc >= 40 )
    cout<<"Second Class";
    else
    cout<<"Failed";
    return 0;
}
void sort(student s[],int n)
{for(int i = 0; i < n; i++)
 {for(int j = i; j < n; j++)
  {if(s[i].perc >= s[j].perc)
   {student temp;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
   }
  }
 }
}
~student()
{
 name="";
 rollno=0;
 perc = 0;
 total = 0;
 marks[6] = 0;
}
};
int main()
{
  int n;
  cout <<"Enter no. of data you want to enter"<<endl;
  cin>>n;
  student s[n];
  for(int i = 0; i < n; i++)
 {
 s[i].getdata();
 }
 cout<<"~~~~~SORTING OF PERCENTAGE~~~~~~"<<endl;
 cout<<setw(20)<<"NAME OF STUDENT"<<setw(20)<<"ROLL.NO."<<setw(20)<<"PERCENTADE"<<setw(20)<<"GRADE"<<endl;
 student k;
 k.sort(s,n);
 for(int i = 0; i < n; i++)
 {
 s[i].display();
 }
 return 0;
 
}