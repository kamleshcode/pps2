#include<iostream>
using namespace std;
class publication
{
 char title[20];
 int price;
 public:
 void get()
 {
  cout<<"Enter the title of book:"<<endl;
  cin>>title;
  cout<<"Enter the rate of book:"<<endl;
  cin>>price;
 }
 void disp()
 {
  cout<<"\nBook:"<<title;
  cout<<"\nPrice:"<<price;
 }
};

class book : virtual public publication
{
 int page;
 public:
 void get1()
 {
  get();
  cout<<" Enter the page:"<<endl;
  cin>>page;
 } 
 void dis()
 {
  disp();
  cout<<"pages:"<<page<<endl;
 }
};

class tape :virtual public publication
{
 int mins;
 public:
 void get2()
 {
  get(); 
  cout<<"Enter the minutes:"<<endl;
  cin>>mins;
 }
 void displ()
 {
   disp();
   cout<<"\nminutes of tape:"<<mins;
 }
};

int main()
{
 book b1[3];
 tape t1[3];
 int ch,i;
 cout<<"\n1.books \n2.tapes\n3.exit\n";
 cout<<"Enter your choice:";
 cin>>ch;
 switch(ch)
   {
     while(ch!=2)
        {
            case 1:
            for(i=0;i<2;i++)
            {
                b1[i].get1();
            } 
            for(i=0;i<2;i++)
            {
                b1[i].dis();
            }   
            break;
            case 2:
            for(i=0;i<2;i++)
            {
                t1[i].get2();
            }
            for(i=0;i<2;i++)
            {
                t1[i].displ();
            }
            break;
            case 3:
            exit(0);
        }
   }return 0;
}