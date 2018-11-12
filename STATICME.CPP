#include<iostream.h>
#include<conio.h>
class test
{
public:
static void read(int x,int y)
{
if(x > y)
cout<<"X is big"<<endl;
else if(y>x)
cout<<"y is big"<<endl;
else
cout<<"both are equal";
}
};
void main()
{
clrscr();
test t1;
t1.read(10,7);
test::read(20,33);
test::read(5,5);
getch();
}