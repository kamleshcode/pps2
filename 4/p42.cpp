/*Q.2 Create a class item with following data members item code, cost, quantity, 
total price. Write member function for each of the following: 
(i) to get data 
(ii) to calculate total price of the item 
(iii) to display data.*/


#include<iostream>
using namespace std;
class item
{
 int code,cost,quantity,price,total;
 public:
 int calculate()
 {
 total=(cost*quantity);
 return total;
 }
 void getdata()
 {
 cout<<"\nEnter the item code : ";
 cin>>code;
 cout<<"\nEnter the cost of item : ";
 cin>>cost;
 cout<<"\nEnter the quantity of item : ";
 cin>>quantity;
 }
 void display()
 {
 cout<<"\nItem Code : "<<code;
 cout<<"\nItem Cost : "<<cost;
 cout<<"\nItem Quantity : "<<quantity;
 cout<<"\nTotal Price : "<<calculate();
 }
};
int main()
{
item a;
for(int i=0;i<2;i++)
 {
 a.getdata();
 a.display();
 }
return 0;;
}