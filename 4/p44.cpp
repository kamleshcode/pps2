/*Q-4.Create a class Time with the following data members int m, h, s. Write a 
member function for 
(i)to get data 
(ii) to convert sec in minutes and hours 
(iii)to display data*/

#include<iostream>
using namespace std;
class time
{
int h,m,s;
public:
 void setdata()
 {
 cout<<"Enter time in sec = ";
 cin>>s;
 }
 void display()
 {
 if(h>0)
 {
 m=m-60;
 }
 else
 {
 m=m;
 }
 s=s%60;
 cout<<"\nTime : "<<h<<" : "<<m<<" : "<<s;
 }
 int convert()
 {
 h=(s/3600);
 m=(s/60);
cout<<"\nTime in hour = "<<h;
 cout<<"\nTime in min = "<<m;
 cout<<"\nTime in sec = "<<s;
 }
};
int main()
{
time a;
a.setdata();
a.convert();
a.display();
return 0;
}