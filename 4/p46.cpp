
//Q.7 Write a program to count the number of objects.

#include<iostream>
using namespace std;
int count;
class object
{
public:
object()
 {
 count++;
 }
};
int main()
{
object a,b;
cout<<"\nNo of objects = "<<count;
return 0;
}