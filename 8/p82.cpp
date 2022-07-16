/*2. Consider a class network as shown in figure given below. The class Employee derives 
information from both Account and Admin classes which in turn derive information 
from the class Person. Define all the four classes and write a program to create, 
update and display the information contained in Employee objects.*/

#include<iostream>
using namespace std;

class person
{
 char name[20];
 int code;
 public:

 void getn()
 {
  cout<<"\nEnter the name :";
  cin>>name;
  cout<<"\nEnter the code :";
  cin>>code;
 } 
 void dis()
 {
  cout<<"\nName :"<<name;
  cout<<"\nCode :"<<code;
 }
};

class account : virtual public person
{
 int pay;
 public:
 void getp()
 {
  cout<<"\nEnter pay:";
  cin>>pay;
 }
 void disp()
 {
  cout<<"\nPay:"<<pay;
 }
};

class admin : virtual public person
{
 int exp;
 public:
 void gete()
 {
  cout<<"\nEnter the experience:";
  cin>>exp;
 }
 void displ()
 {
  cout<<"\nExperience:"<<exp;
 }
};

class employee : public account, public admin
{
 public:
 void display()
 {
  getn();
  getp();
  gete();
  dis();
  disp();
  displ();
 }
};

int main()
{
 employee e1;
 e1.display();
 return 0;
}