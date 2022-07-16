/*1.Assume that Circle is defined using radius and Cylinder is defined using radius and 
height. Write a Circle class as base class and inherit the Cylinder class from it. Develop 
classes such that user can compute the area of Circle objects and volume of Cylinder 
objects. Area of Circle is pie *radius*radius, while volume of Cylinder is pie*(radius * 
radius)*height.*/

#include<iostream>
using namespace std;

const float pi=3.14;

class circle
{
 int r;
 float a;
 public:

 void getdata()
 {
  cout<<"\nEnter the radius:";
  cin>>r;
 }

 float area()
 {
  a=pi*r*r;
  return a;
 }
 void display()
 {
  cout<<"\nArea of circle is:"<<area();
 }
};


class cylinder : public circle
{
 int h;
 float vol;
 public:
 void getd()
 {
  getdata();
  cout<<"\nEnter the height:";
  cin>>h;
 }

 void volume()
 {
  area();
  vol=area()*h;
  display();
  cout<<"\nVolume of cylinder is:"<<vol;
 }
};

int main()
{
 cylinder c;
 c.getd();
 c.volume();
 return 0;
}