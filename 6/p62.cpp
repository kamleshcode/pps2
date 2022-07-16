/*Rewrite matrix class (from assignment 5) using operator overloading concept. i.e. 
overload (+,-,*,/)*/

#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
 float m[3][3];

 public:
 matrix()
 {
for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
m[i][j] = 0;
 }
 }
 }
 void getdata()
 {cout<<"Enter the Matrix : "<<endl;
 for(int i = 0; i <  3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
cin>>m[i][j];
 }
 }
 }
 void display()
 {
 for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
cout<<setw(4)<<m[i][j];
 }
 cout<<endl;
 }
 }

 matrix operator +(matrix a)
 {matrix t;
 for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
  t.m[i][j] = m[i][j] + a.m[i][j];
 }
 }return t;
 }

 matrix operator -(matrix a)
 {matrix t;
 for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
  t.m[i][j] = m[i][j] - a.m[i][j];
 }
 }return t;
 }

matrix operator *(matrix a)
 {matrix t;
 for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
    for(int k = 0; k < 3; k++)
 {
  t.m[i][j] = m[i][j] * a.m[i][j];
 }
 }
 } 
 return t;
 }
matrix operator /(matrix a)
 {matrix t;
 for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
  t.m[i][j] = m[i][j] / a.m[i][j];
 }
 }return t;
 }
 ~matrix()
 {
 for(int i = 0; i < 3; i++)
 {
 for(int j = 0; j < 3; j++)
 {
 m[i][j] = 0;
 }
 }
 }
};
int main()
{
     matrix p,q,r;
     cout<<"Enter matrix A:"<<endl;
     p.getdata();
     cout<<"Enter matrix B:"<<endl;
     q.getdata();
     cout<<"ADDITION OF MATRIX IS:"<<endl;
     r=p+q;
     r.display();
     cout<<"SUBTRACTION OF MATRIX IS:"<<endl;
     r=p-q;
     r.display();
     cout<<"MULTIPLICATION OF MATRIX IS"<<endl;
     r=p*q;
     r.display();
     cout<<"DIVISION OF MATRIX IS:"<<endl;
     r=p/q;
     r.display();
     return 0;
}