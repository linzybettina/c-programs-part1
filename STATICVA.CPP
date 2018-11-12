#include<iostream.h>
#include<conio.h>
class sample
{
static int a,b;
public:
static void getdata()
{
cout<<"Enter two integers";
cin>>a>>b;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
};
void main()
{
sample s;
s.getdata();
sample::getdata();
}

