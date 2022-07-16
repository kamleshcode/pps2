/*Q.3 Create a class Book with following data members book name, author 
name, quantity, rate. 
Write member function to
(i) to get data 
(ii) to display data 
(iii) to calculate total price of the book.*/

#include<iostream>
using namespace std;
class book
{
 char b_name[10],a_name[10];
 int rate,quantity,total;
 public:
 int calculate()
 {
 total=(rate*quantity);
 return total;
 }
void getdata()
 {
 cout<<"\nEnter the Book Name : ";
 cin>>b_name;
 cout<<"\nEnter the Author Name : ";
 cin>>a_name;
 cout<<"\nEnter the price of book : ";
 cin>>rate;
 cout<<"\nEnter the quantity of book : ";
 cin>>quantity;
 }
 void display()
 {
 cout<<"\nBook Name : "<<b_name;
 cout<<"\nAuthor Name : "<<a_name;
 cout<<"\nPrice : "<<rate;
 cout<<"\nItem Quantity : "<<quantity;
 cout<<"\nTotal Price : "<<calculate();
 }
};
int main()
{
book a[10];
for(int i=0;i<2;i++)
 {
 a[i].getdata();
 a[i].display();
 }
return 0;
}
