/*7. Write a program to compare two time class objects by overloading <, >, ==,!= 
operators. */


#include<iostream>
using namespace std;

class time
{int h,m,s,i;
 public:
time()
{
h=0;
m=0;
s=0;
i=0;
}
void getdata()
{
 cout<<"Enter the time in seconds"<<endl;
 cin>>i;
}
void convert()
{ //i=5000
 m=i/60;//83
 s=i%60;//20
 h=m/60;//1
 m=m%60;//23
 }

void operator <(time j)
 {
  if(i<j.i)
  cout<<" Time entered first is smaller"<<endl;
 }

 void operator >(time j)
 {
  if(i>j.i)
  cout<<" Time entered first is greater"<<endl;
 }

 void operator ==(time j)
 {
  if(i==j.i)
  cout<<" Both times entered are equal."<<endl;
 }

 void operator !=(time j)
 {
  if(i!=j.i)
  cout<<" Both times entered are not equal"<<endl;
 }


void displaydata()
 {
 cout<<"Time: "<<h<<":"<<m<<":"<<s<<endl;
 }
~time()
{
h=0;
m=0;
s=0;
i=0;
}
};

int main()
{ class time t1,t2;
t1.getdata();
t2.getdata();
t1.convert();
t2.convert();
t1.displaydata();
t2.displaydata();
t1>t2;
t1<t2;
t1==t2;
t1!=t2;
return 0;
}