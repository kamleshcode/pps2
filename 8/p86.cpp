
#include<iostream>
using namespace std;
class roll
{
 int r;
 public:
 void get()
 {
  cout<<"\nEnter the roll no.";
  cin>>r;
 }
 void dis()
 {
  cout<<"\nRoll no."<<r;
 }
};

class eng : public roll
 {
 char uni[20];
 public:
 void get1()
 {
  get();
  cout<<"\nEnter the name of university:";
  cin>>uni;
 }
 void dis1()
 {
  dis();
  cout<<"\nUniversity:"<<uni;
 }
};

class ce : public eng
{
 int nc;
 public:
 void get2()
 {
  get1();
  cout<<"\nNo. of courses:";
  cin>>nc;
 }
 void dis2()
 {
  dis1();
  cout<<"\nNo.of courses:"<<nc;
 }
};

class it : public eng
{
 int noc;
 public:
 void get3()
 {
  get1();
  cout<<"\nNo. of courses:";
  cin>>noc;
 }
 void dis3()
 {
  dis1();
  cout<<"\nNo.of courses:"<<noc;
 }
};

int main()
{
 ce c;
 it t;
 int ch,i;
 cout<<"\n1.CE \n2.IT\n3.exit\n";
 cout<<"Enter your choice:";
 cin>>ch;
 switch(ch)
    {
        while(ch!=3)
        {
            case 1:
                c.get2();
                c.dis2();
                break;
            case 2:
                t.get3();
                t.dis3();
                break;
            case 3:
                exit(0);
        }
    }
return 0;
}
