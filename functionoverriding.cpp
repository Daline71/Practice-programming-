#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public:
		double num1,x,y;
		void fun()
		{
			cout<<"\n....Base class....";
		}
		void CompareNum()
		{
			cout<<"\nEnter a number: ";
			cin>>num1;
		}
		void AddNum()
		{
			cout<<"\nEnter two numbers: ";
			cin>>x>>y;
		}
		void Area()
		{
			double r,A;
			cout<<"\n...Area of circle...";
			cout<<"\nEnter the radius of circle: ";
			cin>>r;
			A=3.14*r*r;
			cout<<"\nArea of a circle is: "<<A;	
		}
};
class Derived:public Base
{
	double num2,z;
	public:
		void fun()
		{
			cout<<"\n....Derived class....";
		}
		void CompareNum()
		{
			cout<<"\nEnter a number: ";
			cin>>num2;
			if(num1>=num2)
			cout<<"\nGreater number is: "<<num1;
			else
			cout<<"\nGreater number is: "<<num2;
		}
		void AddNum()
		{
			z=x+y;
			cout<<"\nAddition of X and Y is: "<<z;
		}
		void Area()
		{
			cout<<"\n...Area of rectangle...";
			cout<<"\nEnter breadth and length of rectangle: ";
			cin>>x>>y;
			z=x*y;
			cout<<"\nArea of rectangle is: "<<z;
			Base::Area();
		}
};
int main()
{
	Derived d1,d2,d3,d4,d5;
	d1.fun();
	d2.Base::AddNum();
	d2.AddNum();
	d3.Base::CompareNum();
	d3.CompareNum();
    d4.Area();
	Base *ptr=&d5;
	ptr->fun();
	return 0;	
}
