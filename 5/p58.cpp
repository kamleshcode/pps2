/*8. Create a class distance with the following data members.
Int feel, float inch.
Use constructor and destructor properly and write member function for each of the 
following:
a) To get the data.
b) To display the data.
c) Add two distance objects*/

#include<iostream>
using namespace std;
class distance
{
int feet;
float inch;
public:
distance()
{
feet=0;
inch=0;
}
void getdata()
{
cout<<"enter the feet :";
cin>>feet;
cout<<"enter the inches :";
cin>>inch;
}
void display()
{
if(inch>=12)
{inch==12;
feet++;
}
cout<<"DISTANCE:"<<feet<<"ft"<<inch<<"inch"<<endl;
}
void add(distance a,distance b)
{
    feet=a.feet+b.feet;
    inch=a.inch+b.inch;
    if(inch>=12)
    {inch==12;
     feet++;
    }
    display();
}
~distance()
{
feet=0;
inch=0;
}
};
int main()
{
    class distance d1,d2,d3;
    cout<<"~~~~~~~Enter distance 1:~~~~~~~~"<<endl;
    d1.getdata();
    cout<<"~~~~~~~Enter distance 2:~~~~~~~~"<<endl;
    d2.getdata();
    d3.add(d1,d2);
    return 0;
}
