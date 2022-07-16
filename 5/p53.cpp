/*3. Create a class catalog with the following data members.
Title, Author, Year_of_publication, no_of_copies.
Create array of 15 objects, use constructor and destructor properly and write member 
function for each of the following:
a) To get the data.
b) To display the data.
c) To search the particular title, if exists then display that particular record.*/

#include<iostream>
using namespace std;
class catalog
{
 string title,author;
 int yop,noc;
 public:
catalog()
{
 title="";
 author="";
 yop=0;
 noc=0;
}
void getdata()
{
  cout<<endl<<"Enter the Title : ";
 cin.ignore();
 getline(cin,title);
 cout<<"Enter year of publication: ";
 cin>>yop;
 cout<<"Enter name of Author : ";
 cin.ignore();
 getline(cin,author);
 cout<<"Enter the number of copies : ";
 cin>>noc;
}
void display()
{
 cout<<"Title : "<<title<<endl;
 cout<<"Author : "<<author<<endl;
 cout<<"Year of Publication : "<<yop<<endl;
 cout<<"Total copies : "<<noc<<endl;
}
void search(catalog c[],int n)
{string stitle;
int flag=0;
cout<<"Enter the title you want to search:"<<endl;
cin.ignore();
 getline(cin,stitle);
 for(int i=0;i<n;i++)
 {
    if(c[i].title==stitle)
    {
        cout<<"~~~~~~~~~~RECORD FOUND..!!!~~~~~~~~~~"<<endl;
        c[i].display();
        flag++;
    }
    if(flag == 0)
    {
        cout<<"~~~~~~~~~~~Error: Record not found!!!~~~~~~~~~~~~ "<<endl;
    }
 }
}
 ~catalog()
{
 title="";
 author="";
 yop=0;
 noc=0;
}
};
int main()
{
 int n;
 cout<<"Enter no. of data you want to enter : ";
 cin>>n;
 catalog c[n];
 for(int i = 0; i < n; i++)
 {
 c[i].getdata();
 }
 for(int i = 0; i < n; i++)
 {
 c[i].display();
 }
 catalog j;
 j.search(c,n);
 return 0;
}

