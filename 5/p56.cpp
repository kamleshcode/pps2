/*6. Create a class matrix with the following data members.
Int array[size][size].
Use constructor and destructor properly and for performing various arithmetic operations 
write member function for each of the following:
a) Addition function to add two matrices.
b) Subtraction function to subtract two matrices.
c) Multiplication function to multiply two matrices.
d) Division function to divide two matrices.*/


#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
 float m[3][3];
 int r,c;

 public:
 matrix(int r,int c)
 {this->r=r;
  this->c=c;
for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
m[i][j] = 0;
 }
 }
 }
 void getdata()
 {cout<<"Enter the Matrix : "<<endl;
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
cin>>m[i][j];
 }
 }
 }
 void display()
 {
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
cout<<setw(4)<<m[i][j];
 }
 cout<<endl;
 }
 }
 void add(matrix a,matrix b)
 {
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
  m[i][j] = a.m[i][j] + b.m[i][j];
 }
 }display();
 }
 void sub(matrix a,matrix b)
 {
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
  m[i][j] = a.m[i][j] - b.m[i][j];
 }
 }display();
 }
void mul(matrix a,matrix b)
 {
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
    for(int k = 0; k < c; k++)
 {
  m[i][j] = a.m[i][j] * b.m[i][j];
 }
 }
 } 
 display();
 }
void div(matrix a,matrix b)
 {
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
  m[i][j] = a.m[i][j] / b.m[i][j];
 }
 }display();
 }
 ~matrix()
 {r=0;
 c=0;
 for(int i = 0; i < r; i++)
 {
 for(int j = 0; j < c; j++)
 {
 m[i][j] = 0;
 }
 }
 }
};
int main()
{
     int x,y;
     cout<<"Enter no. of rows"<<endl;
     cin>>x;
     cout<<"Enter no. of columns"<<endl;
     cin>>y;
     matrix p(x,y),q(x,y),r(x,y);
     cout<<"Enter matrix A:"<<endl;
     p.getdata();
     cout<<"Enter matrix B:"<<endl;
     q.getdata();
     cout<<"ADDITION OF MATRIX IS:"<<endl;
     r.add(p,q);
     cout<<"SUBTRACTION OF MATRIX IS:"<<endl;
     r.sub(p,q);
     cout<<"MULTIPLICATION OF MATRIX IS"<<endl;
     r.mul(p,q);
     cout<<"DIVISION OF MATRIX IS:"<<endl;
     r.div(p,q);
     return 0;
}
