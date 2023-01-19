#include<iostream>
#include<conio.h>
using namespace std;
class Dummy
{
	int a,b;
	int *p;
	public:
		Dummy()
		{
			p=new int;
		}
		void SetData(int x,int y,int z)
		{
			a=x;b=y;
			*p=z;
		}
		void ShowData()
		{
			cout<<"\na="<<a<<" b="<<b<<" *p="<<*p;
		}
		Dummy(Dummy &d)
		{
			a=d.a;b=d.b;
			p=new int;
			*p=*(d.p);
		}
};
int main()
{
	Dummy d1;
	d1.SetData(3,4,5);
	d1.ShowData();
	Dummy d2=d1;
	d2.ShowData();
	return 0;
}
