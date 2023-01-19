#include<iostream>
#include<conio.h>
using namespace std;
class Dummy
{
public:
    int a,b;
	int &y;
	const int x;
	
		Dummy(int &n):y(n),x(5)
		{
			
		a=7;b=8;	
		
		}
};
int main()
{
	int m=5;
	Dummy obj(m);
	cout<<"\n"<<"a="<<obj.a<<" b="<<obj.b<<" x="<<obj.x<<" y="<<obj.y;
    return 0;
    
}
	
	
