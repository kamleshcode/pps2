/*9.Create a class time with the following data members int h,m,s
      (input data in seconds only)
      Use constructors and destructors properly and
      write member functions for each of the following
      a. To get the data
      b. To display the data
      c. To convert the seconds into h, m ,s
      d. To add two time objects*/

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

void sum(time t1, time t2)
 {
  h=t1.h + t2.h;
  m=t1.m + t2.m;
  s=t1.s + t2.s;
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
{ class time t1,t2,t;
t1.getdata();
t2.getdata();
t1.convert();
t2.convert();
t1.displaydata();
t2.displaydata();
t.convert();
cout<<"Addition of two time is:"<<endl;
t.sum(t1,t2);
t.displaydata();
return 0;
}

