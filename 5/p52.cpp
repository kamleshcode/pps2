/*Create a class book with the following data members.
Book name, Author name, Qty, Price.
Read data for 10 books, use constructor and destructor properly and write member 
function for each of the following:
a) To get the data.
b) To display the data.
c) To find total price (i.e. Qty * price).
d) Sort it according to the total price.*/




#include<iostream>
#include<iomanip>
using namespace std;
class book
{
 string bname;
 string aname;
 int qty,tot;
 float price;
 float total()
 {
 tot=qty*price;
 return tot;
 }
 public:
book()
{
 bname="";
 aname="";
 qty = 0;
 price=0;

}
void getdata()
{
 cout<<endl<<"Enter the Book name : ";
 cin.ignore();
 getline(cin,bname);
 cout<<"Enter the Quantity : ";
 cin>>qty;
 cout<<"Enter the Author : ";
 cin.ignore();
 getline(cin,aname);
 cout<<"Enter the price : ";
 cin>>price;

}

void display()
{
 cout<<setw(20)<<bname<<setw(20)<<aname<<setw(20)<<qty<<setw(20)<<price<<setw(20)<<total()<<endl;
}
void sort(book b[],int n)
{for(int i = 0; i < n-1; i++)
 {for(int j = 1; j < n; j++)
  {if(b[i].total() > b[j].total())
   {book temp;
    temp = b[i];
    b[i] = b[j];
    b[j] = temp;
   }
  }
 }
}
~book()
{
    bname="";
    aname="";
    qty = 0;
    price=0;
}
};
int main()
{
    int n;
 cout<<"Enter no. of data you want to enter : ";
 cin>>n;
 book b[n];
 for(int i = 0; i < n; i++)
{
 b[i].getdata();
 }
cout<<setw(20)<<"Book name"<<setw(20)<<"Author name"<<setw(20)<<"Quantity"<<setw(20)<<"price"<<setw(20)<<"Total Price"<<endl;
for(int i=0;i<n;i++)
{
    b[i].display();
}
book k;
k.sort(b,n);
cout<<"SORTING BY TOTAL PRICE"<<endl;
cout<<setw(20)<<"Book name"<<setw(20)<<"Author name"<<setw(20)<<"Quantity"<<setw(20)<<"price"<<setw(20)<<"Total Price"<<endl;
for(int i=0;i<n;i++)
{
    b[i].display();
}
return 0;
}