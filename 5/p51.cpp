/*1. Create a class player with the following data members.
Player name, Team name and Batting average.
Read data for 10 players, use constructor and destructor properly and write member 
function for each of the following:
a) To get the data.
b) To display the data.
c) Sort it accordingly to the batting average.
d) Print a team wise sorted list of player’s name with their batting average.*/


#include<iostream>
#include<iomanip>
using namespace std;
class player
{

 string pname,tname;
 float batavg;
 public:
player()
{
 pname="";
 tname="";
 batavg=0;
}
void getdata()
{
 cout<<"Enter the team name : ";
 cin.ignore();
 getline(cin,tname);
 cout<<"Enter the batting avg : ";
 cin>>batavg;
 cout<<"Enter the player name : ";
 cin.ignore();
 getline(cin,pname);
}
void display()
{
    cout<<setw(20)<<tname<<setw(20)<<pname<<setw(20)<<batavg<<endl;
}
void sortbat(player p[],int n)
{for(int i = 0; i < n-1; i++)
 {for(int j = i; j < n; j++)
  {if(p[i].batavg > p[j].batavg)
   {player temp;
    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
   }
  }
 }
}

void sortteam(player p[],int n)
{for(int i = 0; i < n-1; i++)
 {for(int j = 1; j < n; j++)
  {if(p[i].tname > p[j].tname)
   {player temp;
    temp = p[i];
    p[i] = p[j];
    p[j] = temp;
   }
  }
 }
}
~player()
{
    pname="";
    tname="";
    batavg=0;
}
};
int main()
{
 int n;
 cout<<"Enter no. of players : ";
 cin>>n;
 player p[n];
 for(int i = 0; i < n; i++)
{
 p[i].getdata();
 }
player s;
s.sortbat(p,n);
cout<<"SORTING BY BATTING"<<endl;
cout<<setw(20)<<"Team name"<<setw(20)<<"Player name"<<setw(20)<<"Batting average"<<endl;
for(int i=0;i<n;i++)
{
    p[i].display();
}
s.sortteam(p,n);
cout<<"SORTING BY TEAM NAME"<<endl;
cout<<setw(20)<<"Team name"<<setw(20)<<"Player name"<<setw(20)<<"Batting average"<<endl;
for(int i=0;i<n;i++)
{
    p[i].display();
}
return 0;
}