/*4. Create class string with following data member char str[20], for performing various 
comparison operations, overload >, <, ==, != operators for two string objects. */

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
    void operator >(string1 a)
    {
       if(str.length()>a.str.length())
       {
        cout<<"First String  is greater"<<endl;
       }
    }
    void operator <(string1 a)
    {
       if(str.length()<a.str.length())
       {
        cout<<"First String  is smaller"<<endl;
       }
    }
    void operator ==(string1 a)
    {
       if(str==a.str)
       {
        cout<<"Both string entered are equal"<<endl;
       }
    }
    void operator !=(string1 a)
    {
       if(str!=a.str)
       {
        cout<<"String entered are not equal"<<endl;
       }
    }
    ~string1()
    {
        str="";
    }

};
int main()
{
     class string1 s1,s2;
    s1.getdata();
    s2.getdata();
    s1>s2;
    s1<s2;
    s1==s2;
    s1!=s2;
    return 0;
}