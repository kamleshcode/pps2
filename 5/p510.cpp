/*10. Create a class string with the following data members.
char str[20].
Use constructor and destructor properly and write member function for each of the 
following:
a) To get the string.
b) To display the string.
c) Add two string objects.*/


#include<iostream>
#include<string>
using namespace std;
class string1
{
    string str;
    public:
    string1()
    {
        str="";
    }
    void getdata()
    {
        cout<<"Enter a string"<<endl;
        cin.ignore();
        getline(cin,str);

    }
    void displaydata()
    {
        cout<<"This string is :"<<str;
    }
    void add(string1 a,string1 b)
    {
        str=a.str+" "+b.str;
        displaydata();
    }
    ~string1()
    {
        str="";
    }

};
int main()
{
     class string1 s1,s2,s;
    s1.getdata();
    s2.getdata();
    s.add(s1,s2);
    return 0;
}