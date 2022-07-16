/*8. Rewrite assignment 1&2(from assignment 6) using +=,-=, *= & /=operator overloading.*/

#include<iostream>
#include<iomanip>
using namespace std;
class complex
{
 float real,img;
 public:
 complex()
 {
real = 0;
img = 0;
 }
 void getdata()
 {
 cout<<"Enter the complex number : ";
 cout<<"Real Part : "<<endl;
 cin>>real;
 cout<<"Imaginary part : "<<endl;
 cin>>img;
 }
 void display()
 {
 cout<<real<<"+"<<img<<"i"<<endl;
 }
 complex operator +=(complex a)
 {
complex t;    
t.real = real + a.real;
t.img = img + a.img;
return t;
 }
complex operator -=(complex a)
 {
complex t;    
t.real = real - a.real;
t.img = img - a.img;
return t;
 }
complex operator *=(complex a)
 {
complex t;
t.real = real * a.real;
t.img = img * a.img;
return t;
 }
complex operator /=(complex a)
 {
complex t;
t.real = (real*a.real+img*a.img)/(a.real*a.real+a.img*a.img);
t.img = (img*a.real-real*a.img)/(a.real*a.real+a.img*a.img);
return t;
 }
 ~complex()
 {
real = 0;
img = 0;
 }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    cout<<"ADDITION"<<endl;
    c3=c1+=c2;
    c3.display();
    cout<<"SUBTRACTION"<<endl;
    c3=c1-=c2;
    c3.display();
    cout<<"MULTIPLACTION"<<endl;
    c3=c1*=c2;
    c3.display();
    cout<<"DIVISION"<<endl;
    c3=c1/=c2;
    c3.display();
    return 0;
    
}