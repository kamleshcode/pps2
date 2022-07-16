/*5. Create a class complex with the following data members.
Real and imaginary.
Use constructor and destructor properly and for performing various arithmetic operations 
write member function for each of the following:
a) Addition function to add two complex nos.
b) Subtraction function to subtract two complex nos.
c) Multiplication function to multiply two complex nos.
d) Division function to divide two complex nos.*/


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
 void add(complex a,complex b)
 {
real = a.real + b.real;
img = b.img + b.img;

 }
void sub(complex a,complex b)
 {
real = a.real - b.real;
img = b.img - b.img;

 }
void mul(complex a,complex b)
 {

real = a.real * b.real;
img = b.img * b.img;

 }
void div(complex a,complex b)
 {

real = (a.real*b.real+a.img*b.img)/(b.real*b.real+b.img*b.img);
img = (b.real*b.real-b.img*b.img)/(b.real*b.real+b.img*b.img);

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
    c3.add(c1,c2);
    c3.display();
    cout<<"SUBTRACTION"<<endl;
    c3.sub(c1,c2);
    c3.display();
    cout<<"MULTIPLACTION"<<endl;
    c3.mul(c1,c2);
    c3.display();
    cout<<"DIVISION"<<endl;
    c3.div(c1,c2);
    c3.display();
    return 0;
    
}
