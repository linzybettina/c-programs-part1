#include<iostream.h>
#include<conio.h>
class one
{
mutable int a;
int b;
public:
one()
{
a=10;
b=10;
}
void show() const
{
a=40;
cout<<a<<endl;
cout<<b;
}
};
int main()
{
clrscr();
one obj;
obj.show();
}