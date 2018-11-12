#include<iostream.h>
class car
{
int Carid;
public:
car()
{cout<<"this is car id";
}
int getID() const
{
return this->Carid;
}
};
int main()
{
car c;
int Carid=100;
cout<<"Car Id="<<c.getID();
}


