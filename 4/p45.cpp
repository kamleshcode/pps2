/*Q.5 Create a class Student with the following data members marks[6], name, 
roll no, percentage and grade. Write a member function for 
(i)to get data 
(ii)to display data 
(iii) to calculate grade based on percentage.*/

#include<iostream>
using namespace std;
class student
{
int no,marks,total;
char name[20];
float per;
public:
 student()
 {
 total=0;
 }
void getdata()
 {
 cout<<"\nEnter roll no of student : ";
 cin>>no;
 cout<<"\nenter the name of student : ";
 cin>>name;
 cout<<"\nEnter marks of student : ";
 for(int i=0;i<5;i++)
 {
 cin>>marks;
 total=marks+total;
 }
 }
 void display()
 {
 cout<<"\nNo : "<<no;
 cout<<"\nName : "<<name;
 cout<<"\nMarks : "<<total;
 per=(total/5);
 cout<<"\nPercentage : "<<per;
 if(per>=60)
 {
 cout<<"\nThird Class";
 }
 else if(per>=70)
 {
 cout<<"\nSecond Class";
 }
 else if(per>=80)
 {
 cout<<"\nFirst Class";
 }
 else if(per>=40)
 {
 cout<<"\nPass Class";
 }
 else
 {
 cout<<"\nFail";
 }
 }
};
int main()
{
student a;

a.getdata();
a.display();
return 0;
}
