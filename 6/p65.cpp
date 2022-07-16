/*5. Create a class distance with following data members int feet float inches write an 
overloaded operators <, >, ==, != two compare two distance objects.*/



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
inch=inch+feet*12;
}
void display()
{
if(inch>=12)
{inch==12;
feet++;
}
cout<<"DISTANCE:"<<feet<<"ft"<<inch<<"inch"<<endl;
}
void operator <(distance a)
{
 if(inch<a.inch)
 {
    cout<<"First Distance entered is smaller"<<endl;
 }
}
void operator >(distance a)
{
 if(inch>a.inch)
 {
    cout<<"First Distance entered is greater"<<endl;
 }
}
void operator ==(distance a)
{
 if(inch==a.inch)
 {
    cout<<"Distance entered are equal"<<endl;
 }
}
void operator !=(distance a)
{
 if(inch!=a.inch)
 {
    cout<<"Distance entered are not equal"<<endl;
 }
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
    d1.display();
    cout<<"~~~~~~~Enter distance 2:~~~~~~~~"<<endl;
    d2.getdata();
    d2.display();
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    d1<d2;
    d1>d2;
    d1==d2;
    d1!=d2;
    
    return 0;
}