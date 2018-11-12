#include<iostream.h>
#include<conio.h>
class stack
{
public:
char data_[100];
int top_;
int  empty()
{
return(top_==-1);
}
char top()
{
return data_[top_];
}
void push(char x)
{
data_[++top_]=x;
}
void pop()
{
--top_;
}
}
 main()
{
clrscr();
stack s;
s.top_=-1;
char str[10]="ABCDE";
int i;
for(i=0;i<5;++i)
s.push(str[i]);
cout<<"Reversed string";
while(!s.empty())
{
cout<<s.top();
s.pop();
}
}