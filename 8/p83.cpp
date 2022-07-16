/*3. Define class employee which has fname and lname as data member. Define following: 
a. Constructor for employee class with default arguments 
b. Print function 
Derive a class called hourly_worker (with wage and hours as data members). Define 
following: 
a. Constructor for hourly_worker class with default arguments 
b. Getpay() function that calculates and returns the pay and 
c. A print function*/

#include<iostream>
using namespace std;

class employee
{
 string lname,fname;
 public:
 employee(string fn="abc",string ln="xyz")
 {
  fname=fn;
  lname=ln;
 }
 void print()
 {
  cout<<"\nFrist Name :"<<fname;
  cout<<"\nLast Name  :"<<lname;
 }
};

class hr_worker : public employee
{
 int hours,wages,p;
 public:
 hr_worker(int hr=5,int wa=5000)
 {
  hours=hr;
  wages=wa;
 }
 int getpay()
 {
  p=hours*wages;
  return p;
 }
 void disp()
 {
  print();
  cout<<"\nPayment ="<<p;
 }
};

int main()
{
hr_worker h1;
h1.getpay();
h1.disp();
return 0;
}
