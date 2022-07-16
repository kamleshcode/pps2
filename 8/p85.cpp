

#include<iostream>
using namespace std;
class publication
{
 char title[20];
 int price;
 public:
 void get()
 {
  cout<<"\nEnter the title of book:";
  cin>>title;
  cout<<"\nEnter the rate of book:";
  cin>>price;
 }
 void disp()
 {
  cout<<"\nBook:"<<title;
  cout<<"\tPrice:"<<price;
 }
};

class sales
{
  int tot_sale;
  public:
  void get3()
  {
   cout<<"\nEnter the total sales:";
   cin>>tot_sale;
  }
  void dis1()
  {
   cout<<"\tTotal sales:"<<tot_sale;
  }
};

class book : public publication , public sales
{
 int page;
 public:
 void get1()
 {
  get();
  get3();
  cout<<"\n Enter the page:";
  cin>>page;
 }
 void dis()
 {
  disp();
  dis1();
  cout<<"\tpages:"<<page;
 }
};

class tape : public publication , public sales
{
 int mins;
 public:
 void get2()
 {
  get();
  get3();
  cout<<"\nEnter the minutes:";
  cin>>mins;
 }
 void displ()
 { 
  disp();
  dis1();
  cout<<"\tminutes of tape:"<<mins;
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