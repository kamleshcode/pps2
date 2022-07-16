/*Q.1 Create a class player with following data members name, age , runs, 
highest , lowest, test, average. 
Write member function for each of the following: 
(i) to get data 
(ii) to display data 
(iii) to calculate average of player.*/

#include<iostream>
using namespace std;
class player
{
 int age,runs,highest,lowest,test;
 float avg;
 char name[20];
 public:
 float calculate()
 {
 avg=(runs+highest+lowest+test)/4;
 return avg;
 }
 void getdata()
 {
 cout<<"\nEnter the name of player : ";
 cin>>name;
 cout<<"\nEnter the age of player: ";
 cin>>age;
 cout<<"\nEnter the total runs of the player : ";
 cin>>runs;
 cout<<"\nEnter the highest runs of the player : ";
 cin>>highest;
 cout<<"\nEnter the lowest runs of the player : ";
 cin>>lowest;
 cout<<"\nEnter the no. of test of the player : ";
 cin>>test;
 }
 void display()
 {
 cout<<"\nPlayer Name : "<<name;
 cout<<"\nTests : "<<test;
 cout<<"\nRuns : "<<runs;
 cout<<"\nHighest : "<<highest;
 cout<<"\nLowest : "<<lowest;
 cout<<"\nAverage : "<<calculate();
 }
};
int main()
{
player p[3];
for(int i=0;i<3;i++)
 {
 p[i].getdata();
 p[i].display();
 }
return 0;;
}
